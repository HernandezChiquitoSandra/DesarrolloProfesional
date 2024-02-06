using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AppBlazor.Shared.Entidades
{
    public class Pelicula
    {
        public int Id { get; set; }
        [Required]
        public string Titulo { get; set; }
        public string Resumen { get; set; }
        public bool EnCartelera { get; set; }
        public DateTime? FechaLanzamiento { get; set; }
        public string? Poster { get; set; } = null;
        public List<GeneroPelicula> GenerosPelicula { get; set; } = new List<GeneroPelicula>();
        public List<ActorPelicula> ActoresPelicula { get; set; } = new List<ActorPelicula>();

        public string? TituloCortado { get; set; }
    }
}
