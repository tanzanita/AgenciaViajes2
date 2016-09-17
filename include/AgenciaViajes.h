#ifndef AGENCIAVIAJES_H
#define AGENCIAVIAJES_H

#include "ListaString.h"
#include "Viajes.h"
#include <fstream>

#include <fstream>
    using std::fstream;
    using std::ios;

#include <iostream>
    using std::cout;
    using std::endl;

#include <string>
    using std::string;


class AgenciaViajes
{
    public:
        AgenciaViajes();
        virtual ~AgenciaViajes();
        void lecturaArchivos(string archivo);
        void leerLinea(string frase, string archivo);

    protected:

    private:
};

#endif // AGENCIAVIAJES_H
