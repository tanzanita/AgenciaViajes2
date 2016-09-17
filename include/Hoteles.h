#ifndef HOTELES_H
#define HOTELES_H

#include <string>
    using std::string;

class Hoteles
{
    public:
        Hoteles();
        virtual ~Hoteles();

    protected:

    private:
        string idViaje;
        string idHotel;//es unico
        string nombre;
        string categoria;
        string ciudad;
        string precioHabIndividual;
        string precioHabDoble;
};

#endif // HOTELES_H
