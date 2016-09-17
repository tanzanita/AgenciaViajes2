#ifndef LISTASTRING_H
#define LISTASTRING_H

#include <string>
    using std::string;



class ListaString
{
    public:
        ListaString();
        virtual ~ListaString();

    protected:

    private:
};

class nodo {
   public:
    nodo(string v)
    {
       valor = v;
       siguiente = NULL;
    }

nodo(string v, nodo * signodo)
    {
       valor = v;
       siguiente = signodo;
    }

   private:
    string valor;
    nodo *siguiente;


   friend class lista;
   //friend class AgenciaDeViajes;
};

typedef nodo *pnodo;



class lista {
   public:
    lista() { primero = actual = NULL; }
    ~lista();


    void InsertarFinal(string v);
    bool ListaVacia() { return primero == NULL; }
    void Mostrar();
    void Siguiente();
    string Primero();
    string Ultimo();
    void BorrarFinal();
    void BorrarInicio();
    string pasarAtributo();

   private:
    pnodo primero;
    pnodo actual;
};
#endif // LISTASTRING_H
