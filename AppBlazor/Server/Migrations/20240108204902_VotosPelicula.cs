using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace AppBlazor.Server.Migrations
{
    /// <inheritdoc />
    public partial class VotosPelicula : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<string>(
                name: "usuarioId",
                table: "VotosPeliculas",
                type: "nvarchar(max)",
                nullable: false,
                defaultValue: "");
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "usuarioId",
                table: "VotosPeliculas");
        }
    }
}
