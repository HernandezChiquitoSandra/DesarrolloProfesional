using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace AppBlazor.Server.Migrations
{
    /// <inheritdoc />
    public partial class RolAdmin : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.Sql(@"INSERT INTO AspNetRoles(Id, Name, NormalizedName) 
            VALUES('95fad6af-299e-4f85-ad7f-ec49248284e1', 'admin', 'ADMIN')");
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.Sql(@"DELETE AspNetRoles WHERE Id = '95fad6af-299e-4f85-ad7f-ec49248284e1'");
        }
    }
}
