#include <iostream>
#include <cstdlib>
#include <string>
#include "agenda.hpp"
using namespace std;

int main()
{
    char preposicion,valor;
    struct contacto *agenda;
    agenda = new contacto [MAX]{};
    struct contacto nuevo;

    do
    {
        cout << "1.Ingresar contacto" << endl;
        cout << "2.Modificar contacto" << endl;
        cout << "3.Mostrar agenda" << endl;
        cin >> valor;
        switch (valor)
        {
        case '1':
            cout << "id: ";
            cin >> nuevo.id;
            cout << endl;

            cout << "nombre: ";
            getline(cin, nuevo.nombre);

            cout << endl
                 << "apellido paterno: ";
            getline(cin, nuevo.apellidoPaterno);
            cout << endl;

            cout << "apellido materno: ";
            getline(cin, nuevo.apellidoMaterno);

            cout << "dia: ";
            cin >> nuevo.fechaNacimiento.dia;
            cout << endl;

            cout << "mes: ";
            cin >> nuevo.fechaNacimiento.mes;
            cout << endl;

            cout << "año: ";
            cin >> nuevo.fechaNacimiento.anho;
            cout << endl;

            ingresar(agenda, nuevo);
            cout << "Desea realizar otra operacion ?(Y/n)";
            cin >> preposicion;
            break;
        case '2':
            cout << "id a modificar: ";
            cin >> nuevo.id;
            cout << endl;

            cout << "nombre: ";
            getline(cin, nuevo.nombre);
            cout << endl;

            cout << "apellido paterno: ";
            getline(cin, nuevo.apellidoPaterno);
            cout << endl;

            cout << "apellido materno: ";
            getline(cin, nuevo.apellidoMaterno);
            cout << endl;

            cout << "dia: ";
            cin >> nuevo.fechaNacimiento.dia;
            cout << endl;

            cout << "mes: ";
            cin >> nuevo.fechaNacimiento.mes;
            cout << endl;

            cout << "año: ";
            cin >> nuevo.fechaNacimiento.anho;
            cout << endl;

            modificar(agenda, nuevo.id, nuevo);
            cout << "Desea realizar otra operacion?(Y/n)";
            cin >> preposicion;
        case '3':
            listar(agenda);
            cout << "Desea realizar otra operacion?(Y/n)";
            cin >> preposicion;
        default:
            cout << "ingrese una opcion correcta" << endl;
            preposicion = 'Y';
            break;
        }

    } while (preposicion == 'Y' || preposicion == 'y');
    delete[] agenda;
    return 0;
}
