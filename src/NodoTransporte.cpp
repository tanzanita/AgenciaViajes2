#include "NodoTransporte.h"
#include "AgenciaViajes.h"

NodoTransporte::NodoTransporte()
{

}

NodoTransporte::NodoTransporte(string idV ,string idH, string idT ,string tipoTrans, string origenTrans,string destinoTrans,string fechaSalidaTrans,string horaSalidaTrans,string fechaLlegadaTrans ,string horaLlegadaTrans,string companiaTrans,string numPlazasTrans,string preioTrans)
{
         idViaje = idV;
         idHotel = idH;
         idTransporte = idT;
         origen = origenTrans;
         destino= destinoTrans;
         fechaSalida = fechaSalidaTrans;
         horaSalida = horaSalidaTrans;
         fechaLlegada = fechaLlegadaTrans;
         horaLlegada= horaLlegadaTrans;
         compania = companiaTrans;
         numPlazas = numPlazasTrans;
         precio = preioTrans;




}
typedef NodoTransporte *pnodoTrasnporte;


