/*
Felipe Yepez A01658002

Crea la clase Reserva con sus respectivos getters para poder acceder
a los atributos privados, crea funciones void para poder llevar cuenta de las
reservas que va a tener el hotel
Clase de composicion a Hotel

*/

#ifndef RESERVA_H
#define RESERVA_H
#include <iostream>
#include <sstream>

using namespace std;

class Reserva
{
private:
    //atributos privados
    int adultos;
    int ninos;
    string fecha_ingreso;
    string fecha_salida;
    string tipo_habitacion_reserva;

public:
    //metodos publicos
    //no hacen falta setters ya que se hace la reserva una sola vez sin modificaciones
    Reserva(); //constructor
    Reserva(int a, int n, string fi, string fs, string tipohabres);
    int get_adultos();
    int get_ninos();
    string get_fechai();
    string get_fechas();
    string get_tipo_habitacion_r();
    string arreglo();

};
//Constructor vacio
Reserva::Reserva()
{

    adultos = 0;
    ninos = 0;
    fecha_ingreso = "";
    fecha_salida = "";
    tipo_habitacion_reserva = "";
}
//Constructor
Reserva::Reserva(int a, int n, string fi, string fs, string tipohabres)
{

    adultos = a;
    ninos = n;
    fecha_ingreso = fi;
    fecha_salida = fs;
    tipo_habitacion_reserva = tipohabres;
}
//metodos de las clases para poder obtener, modificar o ver el estado de la informacion que tienen sus atributos privados
int Reserva::get_adultos()
{
    return  adultos;
}

int Reserva::get_ninos()
{
    return  ninos;
}

string Reserva::get_fechai()
{
    return  fecha_ingreso;
}

string Reserva::get_fechas()
{
    return  fecha_salida;
}

string Reserva::get_tipo_habitacion_r()
{
    return  tipo_habitacion_reserva;
}
//funcion que permite almacenar las distintas reservaciones que se van haciendo para poder desplegarlas
string Reserva::arreglo()
{
    stringstream res;
    res << "\n Numero de adultos: " << adultos << "\n Numero de ninos: " << ninos
         << "\n Fecha de ingreso " <<  fecha_ingreso << "\n Fecha de salida: "
         <<  fecha_salida << "\n Tipo de habitacion: " <<  tipo_habitacion_reserva <<  "\n" <<  "\n";
    return res.str();
}

#endif // RESERVA_H
