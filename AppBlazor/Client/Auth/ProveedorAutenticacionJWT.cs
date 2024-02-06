using AppBlazor.Client.Helpers;
using AppBlazor.Client.Repositorios;
using AppBlazor.Shared.DTOs;
using Microsoft.AspNetCore.Components.Authorization;
using Microsoft.JSInterop;
using System.IdentityModel.Tokens.Jwt;
using System.Net.Http.Headers;
using System.Security.Claims;

namespace AppBlazor.Client.Auth
{
    public class ProveedorAutenticacionJWT : AuthenticationStateProvider, ILoginService
    {
        private readonly IJSRuntime js;
        private readonly HttpClient httpClient;//a travez de este se envia el token cada vez que se haga la peticion http
        private readonly IRepositorio repositorio;

        public ProveedorAutenticacionJWT(IJSRuntime js, HttpClient httpClient,//instancia para cceder a los sevicios storage en Js
            IRepositorio repositorio)
        {
            this.js = js;
            this.httpClient = httpClient;
            this.repositorio = repositorio;
        }

        public static readonly string TOKENKEY = "TOKENKEY";
       // public static readonly string EXPIRATIONTOKENKEY = "EXPIRATIONTOKENKEY";

        private AuthenticationState Anonimo =>
                new AuthenticationState(new ClaimsPrincipal(new ClaimsIdentity()));

        public async override Task<AuthenticationState> GetAuthenticationStateAsync()
        {
            var token = await js.ObtenerDeLocalStorage(TOKENKEY);

            if (token is null)//si no tiene token es anonimo
            {
                return Anonimo;
            }

            //---------------------------

            //var tiempoExpiracionObject = await js.ObtenerDeLocalStorage(EXPIRATIONTOKENKEY);
            //DateTime tiempoExpiracion;

            //if (tiempoExpiracionObject is null)
            //{
            //    await Limpiar();
            //    return Anonimo;
            //}

            //if (DateTime.TryParse(tiempoExpiracionObject.ToString(), out tiempoExpiracion))
            //{
            //    if (TokenExpirado(tiempoExpiracion))
            //    {
            //        await Limpiar();
            //        return Anonimo;
            //    }

            //    if (DebeRenovarToken(tiempoExpiracion))
            //    {
            //        token = await RenovarToken(token.ToString()!);
            //    }
            //}

            return ConstruirAuthenticationState(token.ToString()!);
        }

        //-------------------------------------------------
        private AuthenticationState ConstruirAuthenticationState(string token)
        {
            httpClient.DefaultRequestHeaders.Authorization =
                    new AuthenticationHeaderValue("bearer", token);
            var claims = ParsearClaimsDelJWT(token);
            return new AuthenticationState(new ClaimsPrincipal(new ClaimsIdentity(claims, "jwt")));//con los clkaims obtenidos se va a autenticar
        }

        private IEnumerable<Claim> ParsearClaimsDelJWT(string token)//obtener los claims del usuario
        {//lee lo que esta en el controlador
            var jwtSecurityTokenHandler = new JwtSecurityTokenHandler();//instancia
            var tokenDeserializado = jwtSecurityTokenHandler.ReadJwtToken(token);//lee el token creado anterior
            return tokenDeserializado.Claims;//obtiene los claims del token
        }
        //-----------------------------------

        //private bool TokenExpirado(DateTime tiempoExpiracion)
        //{
        //    return tiempoExpiracion <= DateTime.UtcNow;
        //}

        //private bool DebeRenovarToken(DateTime tiempoExpiracion)
        //{
        //    return tiempoExpiracion.Subtract(DateTime.UtcNow) < TimeSpan.FromMinutes(5);
        //}

        //public async Task ManejarRenovacionToken()
        //{
        //    var tiempoExpiracionObject = await js.ObtenerDeLocalStorage(EXPIRATIONTOKENKEY);
        //    DateTime tiempoExpiracion;

        //    if (DateTime.TryParse(tiempoExpiracionObject.ToString(), out tiempoExpiracion))
        //    {
        //        if (TokenExpirado(tiempoExpiracion))
        //        {
        //            await Logout();
        //        }

        //        if (DebeRenovarToken(tiempoExpiracion))
        //        {
        //            var token = await js.ObtenerDeLocalStorage(TOKENKEY);
        //            var nuevoToken = await RenovarToken(token.ToString()!);
        //            var authState = ConstruirAuthenticationState(nuevoToken);
        //            NotifyAuthenticationStateChanged(Task.FromResult(authState));
        //        }
        //    }
        //}

        //private async Task<string> RenovarToken(string token)
        //{
        //    Console.WriteLine("Renovando el token...");
        //    httpClient.DefaultRequestHeaders.Authorization =
        //        new AuthenticationHeaderValue("bearer", token);

        //    var nuevoTokenResponse = await repositorio.Get<UserTokenDTO>("api/cuentas/RenovarToken");
        //    var nuevoToken = nuevoTokenResponse.Response!;

        //    await js.GuardarEnLocalStorage(TOKENKEY, nuevoToken.Token);
        //    await js.GuardarEnLocalStorage(EXPIRATIONTOKENKEY, nuevoToken.Expiration.ToString());

        //    return nuevoToken.Token;
        //}
   

        public async Task Login(string token)
        {
            await js.GuardarEnLocalStorage(TOKENKEY, token);//guuardar tokenkey y el contenido es token
            //await js.GuardarEnLocalStorage(EXPIRATIONTOKENKEY, tokenDTO.Expiration.ToString());
            var authState = ConstruirAuthenticationState(token);
            NotifyAuthenticationStateChanged(Task.FromResult(authState));//notificar al sistema que se auth y pasa los claim
        }

        public async Task Logout()
        {
            await js.RemoverDelLocalStorage(TOKENKEY);
            httpClient.DefaultRequestHeaders.Authorization = null; //remover token del http
            NotifyAuthenticationStateChanged(Task.FromResult(Anonimo));
            // await Limpiar();
            // NotifyAuthenticationStateChanged(Task.FromResult(Anonimo));
        }

        //private async Task Limpiar()
        //{
        //    await js.RemoverDelLocalStorage(TOKENKEY);
        //    await js.RemoverDelLocalStorage(EXPIRATIONTOKENKEY);
        //    httpClient.DefaultRequestHeaders.Authorization = null;
        //}
    }
}
