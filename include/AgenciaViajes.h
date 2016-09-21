#ifndef AGENCIAVIAJES_H
#define AGENCIAVIAJES_H
#include "NodoViaje.h"
//#include "ListaString.h"

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
        void lecturaArchivos(string archivo);
        void crearViaje(string, string, string, string , string , string , string);
        bool listaViajesVacia();
        //es propio de la lista
        pnodoViaje primerViaje;
};







#endif // AGENCIAVIAJES_H
