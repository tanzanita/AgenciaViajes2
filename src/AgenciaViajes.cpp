#include "AgenciaViajes.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <sstream>
#include <windows.h>

#include <vector>
    using std::vector;



using namespace std;



AgenciaViajes::AgenciaViajes()
{
    primerViaje = NULL;

    //ctor
}

AgenciaViajes::~AgenciaViajes()
{
    //dtor
}

void AgenciaViajes::lecturaArchivos(string archivo){
     fstream ficheroEntrada;
    string linea;
    //string archivo;
    int lenLinea;
    string atributo;
    vector<string> elementos(0);
    char separador = ';';
    ficheroEntrada.open(archivo.c_str(),ios::in);
    //int i2 = 0;
    if (ficheroEntrada.is_open()){
        while (!ficheroEntrada.eof()){
            getline(ficheroEntrada,linea);
            lenLinea = linea.size();
            for (int i = 0; i < lenLinea; i++){
                if(linea[i] != separador){
                    atributo = atributo + linea[i];
                }else{
                    elementos.push_back(atributo);
                    atributo = "";
                }
            }
            elementos.push_back(atributo);
            string idViaje = elementos[0];cout<<idViaje<<endl;
            string origenViaje = elementos[1];cout<<origenViaje<<endl;
            string destinoViaje = elementos[2];cout<<destinoViaje<<endl;
            string fechaSalida = elementos[3];cout<<fechaSalida<<endl;
            string fechaLlegada = elementos[4];cout<<fechaLlegada<<endl;
            string precioViaje = elementos[5];cout<<precioViaje<<endl;
            string plazasViaje = elementos[6];cout<<plazasViaje<<endl;
            crearViaje(idViaje, origenViaje, destinoViaje,fechaSalida, fechaLlegada, precioViaje, plazasViaje);
            elementos.clear();
            atributo = "";
        }
        ficheroEntrada.close();
    }else{
        cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;
    }

}


void AgenciaViajes::crearViaje(string idV, string origenViaje, string destinoViaje, string fechaSalidaViaje, string fechaLlegadaViaje, string precioViaje, string numPlazasViaje){
    pnodoViaje nuevoViaje = new NodoViaje(idV ,origenViaje , destinoViaje ,fechaSalidaViaje,fechaLlegadaViaje ,precioViaje ,numPlazasViaje);

    if(listaViajesVacia()){
        //solo si es vacia yo creo este nodo
        primerViaje = nuevoViaje;
        primerViaje->sigViaje = primerViaje;
        primerViaje->antViaje = primerViaje;
    }else{
        if(primerViaje->sigViaje = primerViaje){
        primerViaje->sigViaje = nuevoViaje;
        nuevoViaje -> antViaje = primerViaje;
        nuevoViaje -> sigViaje = primerViaje;
        primerViaje -> antViaje = nuevoViaje;
        }else{
            pnodoViaje aux = primerViaje;
            while(aux->sigViaje != primerViaje){
                aux -> sigViaje = nuevoViaje;
                nuevoViaje -> antViaje = aux;
                nuevoViaje -> sigViaje = primerViaje;
                primerViaje -> antViaje = nuevoViaje;
            }
        }
    }
}


bool AgenciaViajes::listaViajesVacia(){
    return primerViaje == NULL;
}






