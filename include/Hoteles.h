#ifndef HOTELES_H
#define HOTELES_H

#include <string>
    using std::string;

class Hoteles
{
    public:
        //Constructores
        Hoteles();
        virtual ~Hoteles();

        //Atributos
        string idViaje;
        string idHotel;
        string nombre;
        string categoria;
        string ciudad;
        string precioHabIndividual;
        string precioHabDoble;
        //Punteros


};

#endif // HOTELES_H
