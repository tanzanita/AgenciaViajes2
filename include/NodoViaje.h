#ifndef NODOVIAJE_H
#define NODOVIAJE_H
#include "AgenciaViajes.h"

#include <string>
    using std::string;

class NodoHotel;

class NodoViaje
{
    public:
        //Constructores
        NodoViaje();
        NodoViaje(string, string, string, string, string, string, string);


        //Atributos
        string idViaje;
		string origen;
		string destino;
		string fechaSalida;
		string fechaLegada;
		string precio;
		string numPlazas;

		//Punteros
        NodoViaje *primerViaje;
		NodoViaje *sigViaje;
		NodoViaje *antViaje;
		NodoHotel *listaHotel;//sale de nodo viaje pero apunta a nodo hotel entonves e tipo viaje
};

typedef NodoViaje *pnodoViaje;

#endif // NODOVIAJE_H
