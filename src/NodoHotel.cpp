#include "NodoHotel.h"


NodoHotel::NodoHotel()
{

}

NodoHotel::NodoHotel(string idV, string idH, string nombreHotel, string categoriaHotel,string ciudadHotel, string precioHabIndivHotel, string precioHabDobleHotel)
{
        idViaje = idV ;
        idHotel = idH ;
        nombre = nombreHotel;
        categoria = categoriaHotel;
        ciudad = ciudadHotel;
        precioHabIndividual = precioHabIndivHotel;
        precioHabDoble = precioHabDobleHotel;

}
typedef NodoHotel *pnodoHotel;
