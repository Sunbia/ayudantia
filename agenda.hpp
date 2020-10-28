#ifndef AGENDA_HPP
#define AGENDA_HPP
#include <string>
#define MAX 10
#define unsigned long long size_t
using std::string;
typedef struct
{
    int dia;
    int mes;
    int anho;
} fecha;

struct contacto
{
    int id;
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    fecha fechaNacimiento;
};


void ingresar(struct contacto agenda[], struct contacto nuevo, size_t index);
void modificar(struct contacto agenda[], int id, struct contacto nuevo);
void listar(struct contacto agenda[]);
/*            Funcion opcional que permite
              encontrar un indice libre que
              no se ha ingresado nada.
int indexfree(struct contacto agenda[]);
*/


#endif