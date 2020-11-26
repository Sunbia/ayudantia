#include <iostream>
#include <cstdlib>
#include <string>
#include "agenda.hpp"
using namespace std;

int main()
{
    char preposicion, valor;
    struct contacto *agenda;
    agenda = new contacto[MAX];
    struct contacto nuevo;
    size_t index;

    do
    {
        cout << "1.Ingresar contacto" << endl;
        cout << "2.Modificar contacto" << endl;
        cout << "3.Mostrar agenda" << endl;
        cout << "Ingrese una opcion:";
        cin >> valor;
        switch (valor)
        {
        case '1':
            cout << "id: ";
            cin >> nuevo.id;

            cout << "nombre: ";
            cin.ignore(80, '\n');
            getline(cin, nuevo.nombre);

            cout << "apellido paterno: ";
            getline(cin, nuevo.apellidoPaterno);

            cout << "apellido materno: ";
            getline(cin, nuevo.apellidoMaterno);

            cout << "dia: ";
            cin >> nuevo.fechaNacimiento.dia;

            cout << "mes: ";
            cin >> nuevo.fechaNacimiento.mes;

            cout << "año: ";
            cin >> nuevo.fechaNacimiento.anho;

            std::cout << "posición: ";
            cin >> index;

            ingresar(agenda, nuevo, index);

            cout << "Desea realizar otra operacion ?(Y/n)";
            cin >> preposicion;
            break;
        case '2':
            cout << "id a modificar: ";
            cin >> nuevo.id;

            cout << "nombre: ";
            cin.ignore(80, '\n');
            getline(cin, nuevo.nombre);

            cout << "apellido paterno: ";
            getline(cin, nuevo.apellidoPaterno);

            cout << "apellido materno: ";
            cin.ignore(80, '\n');
            getline(cin, nuevo.apellidoMaterno);

            cout << "dia: ";
            cin >> nuevo.fechaNacimiento.dia;

            cout << "mes: ";
            cin >> nuevo.fechaNacimiento.mes;

            cout << "año: ";
            cin >> nuevo.fechaNacimiento.anho;

            modificar(agenda, nuevo.id, nuevo);
            cout << "Desea realizar otra operacion?(Y/n)";
            cin >> preposicion;
            break;
        case '3':
            listar(agenda);
            cout << "Desea realizar otra operacion?(Y/n)";
            cin >> preposicion;
            break;
        default:
            cout << "ingrese una opcion correcta" << endl;
            preposicion = 'Y';
            break;
        }

    } while (preposicion == 'Y' || preposicion == 'y');
    delete[] agenda;
    return 0;
}
