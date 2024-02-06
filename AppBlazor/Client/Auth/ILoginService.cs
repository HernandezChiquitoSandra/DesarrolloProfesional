using AppBlazor.Shared.DTOs;

namespace AppBlazor.Client.Auth
{
    public interface ILoginService
    {
        Task Login(string token);
        Task Logout();
        //Task ManejarRenovacionToken();
    }
}
