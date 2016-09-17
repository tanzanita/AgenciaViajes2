#ifndef VIAJES_H
#define VIAJES_H

#include <iostream>
#include "ListaString.h"


using namespace std;

class Viajes
{
    public:
        Viajes(lista *listaAtributo);//constructor
        virtual ~Viajes();

    protected:

    private:
        string idViaje;
		string origen;
		string destino;
		string fechaSalida;
		string fechaLlegada;
		string precio;
		string numPlazas;



		//Metodo que solo es usado por Viajes por eso es private,llena los atributos
		//string pasarAtributo(lista *listaAtributo);
};

#endif // VIAJES_H
