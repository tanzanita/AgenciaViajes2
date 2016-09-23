#include "NodoOferta.h"
NodoOferta::NodoOferta()
{
    //dtor
}

NodoOferta::NodoOferta(string idClienteOferta, string idHotelOferta, string precioHabIndividualOferta, string precioHabDobleOferta)
{
        idCliente = idClienteOferta ;
        idHotel = idHotelOferta;
        precioHabIndiv = precioHabIndividualOferta;
        precioHabDoble = precioHabDobleOferta;
}

typedef NodoOferta *pnodoOferta;
