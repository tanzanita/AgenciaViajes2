#include "ListaString.h"
#include "AgenciaViajes.h"

#include <iostream>
    using std::cout;
    using std::endl;

ListaString::ListaString()
{
    //ctor
}

ListaString::~ListaString()
{
    //dtor
}

using namespace std;

lista::~lista()
{
   pnodo aux;

   while(primero) {
      aux = primero;
      primero = primero->siguiente;
      delete aux;
   }
   actual = NULL;
}





void lista::InsertarFinal(string v)
{
   if (ListaVacia())
     primero = new nodo(v);
   else
     { pnodo aux = primero;
        while ( aux->siguiente != NULL)
          aux= aux->siguiente;
        aux->siguiente=new nodo(v);
      }
}




void lista::BorrarFinal()
{
    if (ListaVacia()){
     cout << "No hay elementos en la lista:" << endl;

   }else{
        if (primero->siguiente == NULL) {
                primero= NULL;
            } else {

                pnodo aux = primero;
                while (aux->siguiente->siguiente != NULL) {
                    aux = aux->siguiente;

                }

              pnodo temp = aux->siguiente;
              aux->siguiente= NULL;


                delete temp;
            }
        }
}

void lista::BorrarInicio()
{
    if (ListaVacia()){
     cout << "No hay elementos en la lista:" << endl;

   }else{
        if (primero->siguiente == NULL) {
                primero= NULL;
            } else {

                pnodo aux = primero;
                primero=primero->siguiente;
                delete aux;
            }
        }
}






void lista::Mostrar()
{
   nodo *aux;

   aux = primero;
   while(aux) {
      cout << aux->valor << "-> ";
      aux = aux->siguiente;
   }
   cout << endl;
}


void lista::Siguiente()
{
   if(actual)
      actual = actual->siguiente;
}

string lista::Primero()
{
   actual = primero;
   return actual->valor;
}

string lista::Ultimo()
{
   actual = primero;
   if(!ListaVacia()){
   	while(actual->siguiente){
   		Siguiente();
	   }
   }
   return actual -> valor;

}

//Metodo para cargar los atributos
string lista:: pasarAtributo(){
    string elemento;
    elemento = primero -> valor;
    if(primero -> siguiente != NULL)
        primero = primero-> siguiente;

    return elemento;
}
