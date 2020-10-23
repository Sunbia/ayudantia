#include <iostream>
#include <cstdlib>
#include <string>
#include "agenda.hpp"
using std::string;
using std::cin;
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
            std::cout << "id: ";
            cin >> nuevo.id;
            std::cout << "nombre: ";
            getline(cin,nuevo.nombre);
            std::cout << "apellido paterno: ";
            getline(cin,nuevo.apellidoPaterno);
            std::cout << "apellido materno: ";
            getline(cin,nuevo.apellidoMaterno);
            std::cout << "dia: ";
            cin >> nuevo.fechaNacimiento.dia;
            std::cout << "mes: ";
            cin >> nuevo.fechaNacimiento.mes;
            std::cout << "año: ";
            cin >> nuevo.fechaNacimiento.anho;
            insertar(agenda,nuevo);
            break;
        case 2:
            int new_id;
            struct contacto nuevo;
            std::cout << "id a modificar: ";
            cin >> new_id;
            std::cout << "nombre: ";
            getline(cin,nuevo.nombre);
            std::cout << "apellido paterno: ";
            getline(cin,nuevo.apellidoPaterno);
            std::cout << "apellido materno: ";
            getline(cin,nuevo.apellidoMaterno);
            std::cout << "dia: ";
            cin >> nuevo.fechaNacimiento.dia;
            std::cout << "mes: ";
            cin >> nuevo.fechaNacimiento.mes;
            std::cout << "año: ";
            cin >> nuevo.fechaNacimiento.anho;
            modificar(agenda,new_id,nuevo);
        case 2:
        listar(agenda);
        default:
            break;  
    } while (toupper(preposicion) == 'Y');
    free(agenda);
    return 0;
}
