using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AppBlazor.Shared.Entidades
{
    public class GeneroPelicula
    {
        //public int Id { get; set; }
        public int  PeliculaId { get; set; }//llave foranea de la entidad Pelicula
        public int GeneroId { get; set; }
        public Genero? Genero { get; set; }//propiedad de navegacion a genero, para luego llegar a sus atributos 
        public Pelicula? Pelicula { get; set; }
    }
}
