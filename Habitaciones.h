/*
Felipe Yepez A01658002

Crea la clase Habitaciones con sus respectivos getters para poder acceder
a los atributos privados, crea funciones void para poder llevar cuenta de las
habitaciones existentes en el hotel
Clase de composicion a Hotel y clase padre que dar[a herencia a 4 clases mas

*/

#ifndef HABITACIONES_H
#define HABITACIONES_H
#include <iostream>

using namespace std;


class Habitaciones
{
//atributos privados
private:
    int numero;
    string cama;
    float costo_noche;
    bool television;
    bool cajafuerte;
    bool microondas;
    bool frigobar;
    bool escritorio;

//metodos publicos
// solo setter para precio que es variable, habitacion no cambia
public:
    Habitaciones(); //constructor
    Habitaciones(int num, string cam, float cn, bool tv, bool cf, bool micro, bool frigo, bool esc);
    int get_numero();
    string get_cama();
    float get_costonoche();
    void set_costonoche(float costo);
    string get_television();
    string get_cajafuerte();
    string get_microondas();
    string get_frigobar();
    string get_escritorio();
    string arreglo();
};
//constructor vacio
Habitaciones::Habitaciones()
{

    numero = 000;
    cama = "";
    costo_noche = 0.0;
    television = false;
    cajafuerte = false;
    microondas = false;
    frigobar = false;
    escritorio = false;
}
//constructor que sera llamado por clases hijas
Habitaciones::Habitaciones(int num, string cam, float cn, bool tv, bool cf, bool micro, bool frigo, bool esc)
{

    numero = num;
    cama = cam;
    costo_noche = cn;
    television = tv;
    cajafuerte = cf;
    microondas = micro;
    frigobar = frigo;
    escritorio = esc;
}
//metodos de las clases para poder obtener, modificar o ver el estado de la informacion que tienen sus atributos privados
int Habitaciones::get_numero()
{
    return  numero;
}

string Habitaciones::get_cama()
{
    return  cama;
}

float Habitaciones::get_costonoche()
{
    return  costo_noche;
}

void Habitaciones::set_costonoche(float costo)
{
    costo_noche = costo;
}

string Habitaciones::get_television()
{
    string resp;
    if (television == true)
        return resp = "Si";
    else
        return resp = "No";
}

string Habitaciones::get_cajafuerte()
{
    string resp;
    if (cajafuerte == true)
        return resp = "Si";
    else
        return resp = "No";
}

string Habitaciones::get_microondas()
{
    string resp;
    if (microondas == true)
        return resp = "Si";
    else
        return resp = "No";
}

string Habitaciones::get_frigobar()
{
    string resp;
    if (frigobar == true)
        return resp = "Si";
    else
        return resp = "No";
}

string Habitaciones::get_escritorio()
{
    string resp;
    if (escritorio == true)
        return resp = "Si";
    else
        return resp = "No";
}
//funcion que permite almacenar las distintas habitaciones que se van haciendo para poder desplegarlas
string Habitaciones::arreglo()
{
    stringstream hab;
    hab << numero << "\n Tipo: " << cama << "\n Costo por noche: $" << costo_noche
         << "\n Cuenta con television " <<  television << "\n Cuenta con caja fuerte: "
         <<  cajafuerte << "\n Cuenta con microondas " <<  microondas << "\n Cuenta con caja frigobar: "
         <<  frigobar << "\n Cuenta con caja escritorio: " <<  escritorio << "\n Cuenta con balcon "
         <<  "\n" <<  "\n";
    return hab.str();
}

#endif // HABITACIONES_H
