#include "NodoViaje.h"


NodoViaje::NodoViaje()
{


}

NodoViaje::NodoViaje(string ideV , string origenViaje , string destinoViaje , string fechaSalidaViaje, string fechaLegadaViaje , string precioViaje , string numPlazasViaje)
{
        idViaje = ideV;
		origen = origenViaje;
        destino = destinoViaje;
		fechaSalida = fechaSalidaViaje;
		fechaLegada = fechaLegadaViaje;
		precio = precioViaje;
		numPlazas = numPlazasViaje;

}
typedef NodoViaje *pnodoViaje;







