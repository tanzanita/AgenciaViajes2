#ifndef AGENCIAVIAJES_H
#define AGENCIAVIAJES_H
#include "NodoViaje.h"
#include "NodoHotel.h"
#include "NodoTransporte.h"


#include <fstream>
    using std::fstream;
    using std::ios;

#include <iostream>
    using std::cout;
    using std::endl;

#include <string>
    using std::string;



class NodoViaje;
typedef NodoViaje *pnodoViaje;

class AgenciaViajes
{
    public:
        AgenciaViajes();

        virtual ~AgenciaViajes();
        void lecturaArchivosViaje(string archivo);
        void lecturaArchivosHotel(string archivo);
        void lecturaArchivosTransporte(string archivo);
        void lecturaArchivosOferta(string archivo);
        void crearViaje(string, string, string, string , string , string , string);
        //void crearHotel(string, string, string, string, string, string, string);
        bool listaViajesVacia();
        bool listaHotelVacia(string idV);
        //void MostrarListaHotel();
        void MostrarListaViajes();
        //bool ViajeExistente(string idV);
        //pnodoViaje ViajeEncontrado(string idV);
        //es propio de la lista
        void Menu();
        pnodoViaje primerViaje;
};







#endif // AGENCIAVIAJES_H
