#include <string>
#ifndef AGENDA_HPP
#define AGENDA_HPP
#define MAX 10
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

void ingresar(struct contacto *agenda, struct contacto nuevo);
void modificar(struct contacto *agenda, int id, struct contacto nuevo);
void listar(struct contacto *agenda);

#endif