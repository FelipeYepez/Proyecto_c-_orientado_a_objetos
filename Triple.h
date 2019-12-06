/*
Felipe Yepez A01658002

Crea la clase Triple que es una de las herencias de habitaciones con su respectivo constructor
que lleva valores default del constructor principal de habitacion
Este clase sera parte de la agregacion a hotel

*/

#ifndef TRIPLE_H
#define TRIPLE_H

#include <Habitaciones.h>
#include <iostream>

using namespace std;

class Triple : public Habitaciones
{
private:
    //posible atributo propio de la clase hija
    bool balcon;

public:
    Triple();
    //constructor de clase hija para poder construir en clase padre con datos predeterminados de la clase hija
    Triple(int num, float cn, bool cf):Habitaciones(num, "Queen + Individual + Individual", cn, true, cf, true, true, true)
    {
    }
    string get_balcon();
};
//metodo para saber si cuenta o no con balcon
string Triple::get_balcon()
{
    string resp;

    if (balcon == true)
        return resp = "Si";

    else
        return resp = "No";
}

#endif // TRIPLE_H
