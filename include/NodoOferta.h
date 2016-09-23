#ifndef NODOOFERTA_H
#define NODOOFERTA_H
#include "AgenciaViajes.h"


class NodoOferta
{
    public:
        //cONSTRUCTORES
        NodoOferta();
        NodoOferta(string, string, string, string);

        //ATRIBUTOS
        string idCliente;
        string idHotel;
        string precioHabIndiv;
        string precioHabDoble;

        //PUNTEROS
        NodoOferta *sigOferta;
        NodoOferta *antOferta;
        NodoHotel *listaHotele;

};
typedef NodoOferta *pnodoOferta;

#endif // NODOOFERTA_H
