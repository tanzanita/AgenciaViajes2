#ifndef NODOTRANSPORTE_H
#define NODOTRANSPORTE_H
#include "AgenciaViajes.h"

#include <string>
    using std::string;

class NodoHotel;
class NodoTransporte
{
    public:
        //CONSTRUCTORES
        NodoTransporte();
        NodoTransporte(string, string,string,string,string,string,string,string,string,string,string,string,string);

        //ATRIBUTOS
        string idViaje;
        string idHotel;
        string idTransporte;
        string tipoTransporte;
        string origen;
        string destino;
        string fechaSalida;
        string horaSalida;
        string fechaLlegada;
        string horaLlegada;
        string compania;
        string numPlazas;
        string precio;



        //PUNTEROS
        NodoTransporte *sigTransporte;
        NodoTransporte *antTransporte;
        NodoHotel *listaHoteles;


};
typedef NodoTransporte *pnodoTransporte;

#endif // NODOTRANSPORTE_H
