#include <iostream>
#include <string>
#include "agenda.hpp"

int sizefree(struct contacto agenda[])
{
    int sizefree = 0;
    struct contacto *aux = &agenda[0];
    for (size_t i = 0; i <MAX ; i++, aux++)
    {
        if ((aux + i) == NULL)
        {
            sizefree++;
        }
    }
    return sizefree;
}

void ingresar(struct contacto agenda[], struct contacto nuevo)
{
    struct contacto *aux = &agenda[0];
    int indexfree = (MAX - sizefree(aux) - 1);
    *(aux + indexfree) = nuevo;
}

void modificar(struct contacto agenda[], int id, struct contacto nuevo)
{
    struct contacto *aux = &agenda[0];
    for (size_t i = 0; i < MAX; i++)
    {
        if ((aux + i)->id == id)
        {
            *(aux + i) = nuevo;
        }
    }
}

void listar(struct contacto agenda[])
{
    struct contacto *aux = &agenda[0];
    for (size_t i = 0; i < MAX; i++, aux++)
    {
            std::cout << "Contacto " << i + 1 << ":" << std::endl;
            std::cout << "id:" << aux->id << std::endl;
            std::cout << "nombre:" << aux->nombre;
            std::cout << " " << aux->apellidoPaterno;
            std::cout << " " << aux->apellidoMaterno << std::endl;
            std::cout << "fecha de nacimiento:" << aux->fechaNacimiento.dia << "/"
                      << aux->fechaNacimiento.mes << "/"
                      << aux->fechaNacimiento.anho << std::endl;
        
    }
}
