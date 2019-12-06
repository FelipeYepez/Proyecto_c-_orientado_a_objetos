/*
Felipe Yepez A01658002

Crea la clase Hotel con sus respectivos getters para poder acceder
a los atributos privados, crea funciones void para poder implementar la composicion
de las clases habitaciones y reservas para posteriormente poder desplegarlas y ver el
registro que se lleva dentro del hotel
Si se elimina el hotel se eliminan consigo sus clases de composicion

*/

#ifndef HOTEL_H
#define HOTEL_H
#include <iostream>

using namespace std;

#include "reserva.h"
//code blocks no recibia datos de las herencias de habitaciones por lo que se las incluye individualente a pesar de que tengan sonstructor con herecia
#include <Individual.h>
#include <Doble.h>
#include <Triple.h>
#include <Suite.h>

class Hotel
{
    //atributos privados
private:
    Reserva reser[100];
    Habitaciones habit[100];
    int cont_res;
    int cont_hab;
    string nombre;
    string ubicacion;
    int pisos;
    int cant_habitaciones;
    bool desayuno;
    bool parqueo;
    bool wifi;

    //metodos publicos
    // no hay setters ya que no hay necesidad de cambiar la informacion del hotel
public:
    Hotel();

    Hotel(string n, string u, int pis, int h, bool d, bool parq, bool wf); //Constructor
    string get_nombre();
    string get_ubicacion();
    int get_pisos();
    int get_canthabitaciones();
    string get_desayuno();
    string get_parqueo();
    string get_wifi();
    void muestra_reservas();
    void muestra_habitaciones();
    void agrega_habitacion_indiv(int num,float cn, bool tv, bool cf, bool micro, bool frigo, bool esc);
    void agrega_habitacion_dob(int num,float cn, bool cf, bool micro, bool frigo);
    void agrega_habitacion_triple(int num, float cn, bool cf);
    void agrega_habitacion_sui(int num, string cam, float cn );
    void agrega_reserva(int a, int n, string fi, string fs, string tipohabres);
};
//constructor vacio
Hotel::Hotel()
{

    nombre = "";
    ubicacion= "";
    pisos = 0;
    cant_habitaciones = 0;
    desayuno = false;
    parqueo = false;
    wifi = false;
}
//constructor hotel
Hotel::Hotel(string n, string u, int pis, int h, bool d, bool parq, bool wf)
{

    nombre = n;
    ubicacion= u;
    pisos = pis;
    cant_habitaciones = h;
    desayuno = d;//metodo para saber si cuenta o no con balcon
    parqueo = parq;
    wifi = wf;
}

//metodos de las clases para poder obtener, modificar o ver el estado de la informacion que tienen sus atributos privados
string Hotel::get_nombre()
{
    return nombre;
}

string Hotel::get_ubicacion()
{
    return ubicacion;
}

int Hotel::get_pisos()
{
    return pisos;
}

int Hotel::get_canthabitaciones()
{
    return cant_habitaciones;
}

string Hotel::get_desayuno()
{
    string resp;
    if (desayuno == true)
        return resp = "Si";
    else
        return resp = "No";
}

string Hotel::get_parqueo()
{
    string resp;
    if (parqueo == true)
        return resp = "Si";
    else
        return resp = "No";
}

string Hotel::get_wifi()
{
    string resp;
    if (wifi == true)
        return resp = "Si";
    else
        return resp = "No";
}
//funcion que permite desplegar las reservas creadas a traves de composicion
void Hotel::muestra_reservas()
{
    cout << "RESERVA: \n";
    for(int i=0; i<cont_res; i++)
    {
        cout << "\t\t" << reser[i].arreglo();
    }
}
//funcion que permite desplegar las habitaciones creadas a traves de composicion
void Hotel::muestra_habitaciones()
{
    cout << "HABITACION: \n";
    for(int i=0; i<cont_hab; i++)
    {
        cout << "\t\t" << habit[i].arreglo();
    }
}
// composicion que llama constructor de clase para crearla dentro de hotel
void Hotel::agrega_habitacion_indiv(int num,float cn, bool tv, bool cf, bool micro, bool frigo, bool esc)
{
    Individual indiv(num, cn, tv, cf, micro, frigo, esc);
    habit[cont_hab] = indiv;
    cont_hab += 1;
}
// composicion que llama constructor de clase para crearla dentro de hotel
void Hotel::agrega_habitacion_dob(int num,float cn, bool cf, bool micro, bool frigo)
{
    Doble dob(num, cn, cf, micro, frigo);
    habit[cont_hab] = dob;
    cont_hab += 1;
}
// composicion que llama constructor de clase para crearla dentro de hotel
void Hotel::agrega_habitacion_triple(int num, float cn, bool cf)
{
    Triple trip(num, cn, cf);
    habit[cont_hab] = trip;
    cont_hab += 1;
}
// composicion que llama constructor de clase para crearla dentro de hotel
void Hotel::agrega_habitacion_sui(int num, string cam, float cn )
{
    Suite sui(num, cam, cn);
    habit[cont_hab] = sui;
    cont_hab += 1;
}
// composicion que llama constructor de clase para crearla dentro de hotel
void Hotel::agrega_reserva(int a, int n, string fi, string fs, string tipohabres)
{
    Reserva reserv(a, n, fi, fs, tipohabres);
    reser[cont_res] = reserv;
    cont_res += 1;
}

#endif // HOTEL_H
