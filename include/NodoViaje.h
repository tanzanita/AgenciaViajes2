#ifndef NODOVIAJE_H
#define NODOVIAJE_H

#include Viajes.h
class NodoViaje
{
    public:
        NodoViaje(Viajes *viaje);
        virtual ~NodoViaje();
        NodoViaje *anterior;
        Viajes *viaje;//valor apunta a la clase
        NodoViaje *siguiente;
        //vhotel = nodo_hotel;

    protected:

    private:

};



#endif // NODOVIAJE_H
