namespace AppBlazor.Client.Repositorios
{
    public class HttpResponseWrapper<T>
    {
        public HttpResponseWrapper(T response, bool error, HttpResponseMessage httpResponseMessage)
        {
            Response = response;
            Error = error;
            HttpResponseMessage = httpResponseMessage;

        }

        public bool Error { get; set; }
        public T? Response { get; set; }
        public HttpResponseMessage HttpResponseMessage { get; set; }//todas las respuestas http, como cabeceras4

        public async Task<string?> ObtenerMensajeError() {
            if (!Error)
            {
                return null;
            }
            var codigoEstatus = HttpResponseMessage.StatusCode;

            if (codigoEstatus == System.Net.HttpStatusCode.NotFound)
            {
                return "Recurso no encontrado";
            }
            else if (codigoEstatus == System.Net.HttpStatusCode.BadRequest)
            {
                return await HttpResponseMessage.Content.ReadAsStringAsync();//no puede pasar de este punto hasta que que complete el proceso
            }
            else if (codigoEstatus == System.Net.HttpStatusCode.Unauthorized)
            {
                return "tienes que loguearte para hacer esto";
            }
            else if (codigoEstatus == System.Net.HttpStatusCode.Forbidden)
            {
                return "no tienes permiso para hacer esto";
            }
            else {
                return "Ha ocurrido un error inesperado";
            }

        }
    }
}
