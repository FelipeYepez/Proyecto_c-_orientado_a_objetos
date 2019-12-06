/*
Felipe Yepez A01658002

Crea la clase Doble que es una de las herencias de habitaciones con su respectivo constructor
que lleva valores default del constructor principal de habitacion
Este clase sera parte de la agregacion a hotel

*/

#ifndef DOBLE_H
#define DOBLE_H

#include <Habitaciones.h>
#include <iostream>

using namespace std;

class Doble : public Habitaciones
{
private:
    //posible atributo propio de la clase hija
    bool balcon;

public:
    Doble();
    //constructor de clase hija para poder construir en clase padre con datos predeterminados de la clase hija
    Doble(int num,float cn, bool cf, bool micro, bool frigo):Habitaciones(num, "Queen + Queen", cn, true, cf, micro, frigo, true)
    {
    }
    string get_balcon();
};
//metodo para saber si cuenta o no con balcon
string Doble::get_balcon()
{
    string resp;

    if (balcon == true)
        return resp = "Si";

    else
        return resp = "No";
}

#endif // DOBLE_H
