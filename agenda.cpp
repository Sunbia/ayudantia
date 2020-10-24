#include <iostream>
#include <string>
#include "agenda.hpp"

int indexfree(struct contacto agenda[])
{
    for (size_t i = 0; i < MAX; i++)
    {
        if (agenda[i].nombre.empty())
        {
            return i;
        }
    }
}

void ingresar(struct contacto agenda[], struct contacto nuevo)
{
    int index = indexfree(agenda);
    agenda[index].id = nuevo.id;
    agenda[index].nombre = nuevo.nombre;
    agenda[index].apellidoPaterno = nuevo.apellidoPaterno;
    agenda[index].apellidoMaterno = nuevo.apellidoMaterno;
    agenda[index].fechaNacimiento.dia = nuevo.fechaNacimiento.dia;
    agenda[index].fechaNacimiento.mes = nuevo.fechaNacimiento.mes;
    agenda[index].fechaNacimiento.anho = nuevo.fechaNacimiento.anho;
}

void modificar(struct contacto agenda[], int id, struct contacto nuevo)
{
    for (size_t i = 0; i < MAX; i++)
    {
        if (agenda[i].id == id)
        {
            agenda[i].id = nuevo.id;
            agenda[i].nombre = nuevo.nombre;
            agenda[i].apellidoPaterno = nuevo.apellidoPaterno;
            agenda[i].apellidoMaterno = nuevo.apellidoMaterno;
            agenda[i].fechaNacimiento.dia = nuevo.fechaNacimiento.dia;
            agenda[i].fechaNacimiento.mes = nuevo.fechaNacimiento.mes;
            agenda[i].fechaNacimiento.anho = nuevo.fechaNacimiento.anho;
        }
    }
}

void listar(struct contacto agenda[])
{
    for (size_t i = 0; i < MAX; i++)
    {
        if (agenda[i].nombre.empty() == false)
        {
            std::cout << "Contacto " << i + 1 << ":" << std::endl;
            std::cout << "id:" << agenda[i].id << std::endl;
            std::cout << "nombre:" << agenda[i].nombre;
            std::cout << " " << agenda[i].apellidoPaterno;
            std::cout << " " << agenda[i].apellidoMaterno << std::endl;
            std::cout << "fecha de nacimiento:" << agenda[i].fechaNacimiento.dia << "/"
                      << agenda[i].fechaNacimiento.mes << "/"
                      << agenda[i].fechaNacimiento.anho << std::endl;
        }
    }
}
