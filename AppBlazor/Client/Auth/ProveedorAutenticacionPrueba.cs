using Microsoft.AspNetCore.Components.Authorization;
using System.Security.Claims;

namespace AppBlazor.Client.Auth
{
    public class ProveedorAutenticacionPrueba : AuthenticationStateProvider
    {
        public async override Task<AuthenticationState> GetAuthenticationStateAsync()//devuelve el estado de autenticacion del usuario
        {
            var anonimo = new ClaimsIdentity();
            var usuarioSandra= new ClaimsIdentity(
                new List<Claim>
                {
                    new Claim("llave1", "valor1"),//tipo, valor
                    new Claim("edad", "999"),
                    new Claim(ClaimTypes.Name, "Sandra")
                    //new Claim(ClaimTypes.Role, "admin")
                },
                authenticationType: "prueba");//se pone tipo de authentication y luego se le dice teoricamente que se auth abajo
            return await Task.FromResult(new AuthenticationState(new ClaimsPrincipal(usuarioSandra)));
        }
    }
}
