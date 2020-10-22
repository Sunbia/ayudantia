#include <iostream>
#include <cstdlib>
#include <string>
#include "agenda.hpp"
using std::string;
int main(int argc, char const *argv[])
{
    char preposicion;
    int valor;
    struct contacto *agenda;
    agenda = (contacto*)calloc(MAX,sizeof(contacto));

    do
    {
        std::cout << "1.Ingresar contacto" << std::endl;
        std::cout << "2.Modificar contacto" << std::endl;
        std::cout << "3.Mostrar agenda" << std::endl;
        std::cin >> valor;
        switch (valor)
        {
        case 1:
            struct contacto nuevo;
            std::cin >> nuevo.id;
            std::cin >> nuevo.nombre;
            std::cin >> nuevo.apellidoPaterno;
            std::cin >> nuevo.apellidoMaterno;
            std::cin >> nuevo.fechaNacimiento;
            ingresar();
            break;
        
        default:
            break;  
    } while (toupper(preposicion) == 'Y');
    free(agenda);
    return 0;
}
