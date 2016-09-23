#ifndef NODOHOTEL_H
#define NODOHOTEL_H
#include "AgenciaViajes.h"

#include <string>
    using std::string;

class NodoViaje;
class NodoTransporte;

class NodoHotel
{
    public:
        //CONTRUCTORES
        NodoHotel();
        NodoHotel(string, string, string, string, string, string, string);

        //ATRIBUTOS
        string idViaje;
        string idHotel;
        string nombre;
        string categoria;
        string ciudad;
        string precioHabIndividual;
        string precioHabDoble;

        //PUNTEROS
        NodoHotel *sigHotel;
        NodoHotel *antHotel;
        NodoViaje *listaViaje;
        NodoViaje *devolverViaje;
        NodoTransporte *listaTransporte;
        //NodoOferta *listaOferta;


};
typedef NodoHotel *pnodoHotel;

#endif // NODOHOTEL_H
