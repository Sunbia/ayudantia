#include "agenda.hpp"

void ingresar(struct contacto *agenda, struct contacto nuevo)
{
    if (isempty(agenda))
    {
        *agenda = nuevo;
    }
    else
    {
        do
        {
            if (*agenda != 0)
            {
                agenda++;
                *agenda = nuevo;
            }
        } while (*agenda == 0);
    }
}

void modificar(struct contacto *agenda, int id, struct contacto nuevo)
{
    do
    {
        if (agenda->id == id)
        {
            *agenda = nuevo;
        }
        else
        {
            agenda++;
        }
    } while (agenda == NULL);
}

void listar(struct contacto *agenda)
{
    int i=1;
    do
    {
        std::cout << "Contacto "<<i<<":" << std::endl;
        std::cout << *agenda << std::endl;
        agenda++;
        i++;
    } while (agenda != NULL);
    
}

bool isempty(struct contacto *agenda)
{
    struct contacto *aux = agenda;
    for (int i = 0; i < MAX; i++)
    {
        if (*(aux + i) != 0)
        {
            return false;
        }
        else
        {
            aux++;
        }
    }
    return true;
}