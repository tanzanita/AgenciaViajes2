#include "AgenciaViajes.h"
//#include <iostream>
#include <stdio.h>
//#include <string>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <sstream>
//#include <windows.h>

#include <vector>
    using std::vector;


using namespace std;



AgenciaViajes::AgenciaViajes()
{
    primerViaje = NULL;

}

AgenciaViajes::~AgenciaViajes()
{
    //dtor
}
//LECTURAS DE ARCHIVOS
void AgenciaViajes::lecturaArchivosViaje(string archivo){
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
            //llamada a funcion para validar que los IDE sean unicos
            //validarElementos(elementos);
            cout<<"-----------------------------------Viajes-----------------------------------"<<endl;
            cout<<"----------------------------------------------------------------------------"<<endl;

            //int idViaje = atoi(elementos[0].c_str());cout<<"ID Viaje: "<<idViaje<<endl;
            string idViaje = elementos[0];cout<<"ID Viaje: "<<idViaje<<endl;
            string origenViaje = elementos[1];cout<<"Origen Viaje: "<<origenViaje<<endl;
            string destinoViaje = elementos[2];cout<<"Destino del viaje:"<<destinoViaje<<endl;
            string fechaSalida = elementos[3];cout<<"Fecha de salida: "<<fechaSalida<<endl;
            string fechaLlegada = elementos[4];cout<<"Fecha de llegada: "<<fechaLlegada<<endl;
            string precioViaje = elementos[5];cout<<"Precio del viaje: "<<precioViaje<<endl;
            string plazasViaje = elementos[6];cout<<"Numero de plazas: "<<plazasViaje<<endl;
            //cout<<"----------------------------------------------------------------------------"<<endl;
            crearViaje(idViaje, origenViaje, destinoViaje,fechaSalida, fechaLlegada, precioViaje, plazasViaje);
            elementos.clear();
            atributo = "";
        }
        ficheroEntrada.close();
    }else{
        cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;
    }

}

void AgenciaViajes::lecturaArchivosHotel(string archivo){
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
            cout<<"-----------------------------------Hoteles-----------------------------------"<<endl;
            cout<<"----------------------------------------------------------------------------"<<endl;
            //int idViaje = atoi(elementos[0].c_str());cout<<"ID Viaje: "<<idViaje<<endl;
            string idViaje = elementos[0];cout<<"ID Viaje: "<<idViaje<<endl;
            string idHotel = elementos[1];cout<<"ID Hotel: "<<idHotel<<endl;
            string nombre = elementos[2];cout<<"Nombre: "<<nombre<<endl;
            string categoria = elementos[3];cout<<"Categoria: "<<categoria<<endl;
            string ciudad = elementos[4];cout<<"Ciudad: "<<ciudad<<endl;
            string precioHabIndividual = elementos[5];cout<<"Precio habitacion dobre: "<<precioHabIndividual<<endl;
            string precioHabDoble = elementos[6];cout<<"Precio habitacionindividual: "<<precioHabDoble<<endl;
            //crearHotel(idViaje, idHotel, nombre,categoria, ciudad, precioHabIndividual, precioHabDoble);
            elementos.clear();
            atributo = "";
        }
        ficheroEntrada.close();
    }else{
        cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;
    }

}

void AgenciaViajes::lecturaArchivosTransporte(string archivo){
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
            cout<<"-----------------------------------Transporte-----------------------------------"<<endl;
            cout<<"----------------------------------------------------------------------------"<<endl;
            //int idViaje = atoi(elementos[0].c_str());cout<<"ID Viaje: "<<idViaje<<endl;
            string idViaje = elementos[0];cout<<"ID Viaje: "<<idViaje<<endl;
            string idHotel = elementos[1];cout<<"ID Hotel: "<<idHotel<<endl;
            string idTransporte = elementos[2];cout<<"ID Trasnporte: "<<idTransporte<<endl;
            string tipoTranporte = elementos[3];cout<<"Tipo: 1Aereo-2Maritimo-3Terrestre: "<<tipoTranporte<<endl;
            string origen = elementos[4];cout<<"Origen: "<<origen<<endl;
            string destino = elementos[5];cout<<"Destino: "<<destino<<endl;
            string fechaSalida = elementos[6];cout<<"Fecha Salida: : "<<fechaSalida<<endl;
            string horaSalida = elementos[7];cout<<"Hora Salida: "<<horaSalida<<endl;
            string fechaLlegada= elementos[8];cout<<"Fecha Legada: "<<fechaLlegada<<endl;
            string horaLegada = elementos[9];cout<<"Hora Llegada: "<<horaLegada<<endl;
            string compania = elementos[10];cout<<"Compania: "<<compania<<endl;
            string numPlazas = elementos[11];cout<<"Numero de Plazas: "<<numPlazas<<endl;
            string precio = elementos[12];cout<<"Precio: "<<precio<<endl;

            //crearTransporte(idViaje, idHotel, nombre,categoria, ciudad, precioHabIndividual, precioHabDoble);
            elementos.clear();
            atributo = "";
        }
        ficheroEntrada.close();
    }else{
        cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;
    }

}

void AgenciaViajes::lecturaArchivosOferta(string archivo){
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
            //llamada a funcion para validar que los IDE sean unicos
            //validarElementos(elementos);
            cout<<"-----------------------------------Oferta-----------------------------------"<<endl;
            cout<<"----------------------------------------------------------------------------"<<endl;
            string idViaje = elementos[0];cout<<"ID Viaje: "<<idViaje<<endl;
            string idHotel = elementos[1];cout<<"ID Hotel: "<<idHotel<<endl;
            string precioHabIndiv = elementos[2];cout<<"Precio Habitacion individual:"<<precioHabIndiv<<endl;
            string precioHabDoble = elementos[3];cout<<"Precio Habitacion doble: "<<precioHabDoble<<endl;
            cout<<"----------------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            elementos.clear();
            atributo = "";
        }
        ficheroEntrada.close();
    }else{
        cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;
    }

}


//CREACION DE NODOS
void AgenciaViajes::crearViaje(string idV, string origenViaje, string destinoViaje, string fechaSalidaViaje, string fechaLlegadaViaje, string precioViaje, string numPlazasViaje){
    pnodoViaje nuevoViaje = new NodoViaje(idV ,origenViaje , destinoViaje ,fechaSalidaViaje,fechaLlegadaViaje ,precioViaje ,numPlazasViaje);

    if(listaViajesVacia()){
        //solo si es vacia yo creo este nodo
        primerViaje = nuevoViaje;
        primerViaje->sigViaje = primerViaje;
        primerViaje->antViaje = primerViaje;

    }else{
        pnodoViaje aux = primerViaje;
        while(aux->sigViaje != primerViaje){
            aux = aux->sigViaje;
        }
        aux -> sigViaje = nuevoViaje;
        nuevoViaje -> antViaje = aux;
        nuevoViaje -> sigViaje = primerViaje;
        primerViaje -> antViaje = nuevoViaje;
        aux->listaHotel =NULL;//asegurarse que el nodo todavia no tiene nada
    }
}

/*void AgenciaViajes::crearHotel(string idV, string idH, string nombreHotel, string categoriaHotel, string ciudadHotel, string precioHabIndividualHotel, string precioHabDobleHotel){
    pnodoHotel nuevoHotel = new NodoHotel(idV,idH , nombreHotel ,categoriaHotel,ciudadHotel ,precioHabIndividualHotel ,precioHabDobleHotel);
    pnodoViaje vij = ViajeEncontrado(idV);
    //uso a nuevo como primero

    if(listaHotelVacia(idV)){
        vij->listaHotel = nuevoHotel;
        nuevoHotel->devolverViaje = vij;
        nuevoHotel->sigHotel = NULL;
        nuevoHotel->antHotel = NULL;
    }else{
         pnodoHotel primerH = vij->listaHotel;
         pnodoHotel aux = primerH;
     while(aux->sigHotel != NULL){
        aux = aux->sigHotel;
         }
         aux->sigHotel = nuevoHotel;
         aux->sigHotel->antHotel= aux;
         aux->sigHotel->sigHotel = NULL;
         aux->sigHotel->devolverViaje=NULL;
         nuevoHotel=NULL;
    }
}
*/

//METODOS DE VALIDACIONES DE LISTAS
bool AgenciaViajes::listaViajesVacia(){
    return primerViaje == NULL;
}

/*bool AgenciaViajes::listaHotelVacia(int idV){
    pnodoViaje vij = ViajeEncontrado(idV);
    if(vij->listaHotel == NULL){
        return true;
    }
    return false;
}
*/


//METODOS PARA MOSTRAR
void AgenciaViajes :: MostrarListaViajes(){
    cout<<"Lista Viajes: "<<endl;
    cout<<endl;
    pnodoViaje aux = primerViaje;
    while(aux->sigViaje != primerViaje){
        cout<<aux->idViaje<<";"<<aux->origen<<";"<<aux->destino<<";"<<aux->fechaSalida<<";"<<aux->fechaLegada<<";"<<aux->precio<<";"<<aux->numPlazas<<" -> ";
        aux = aux->sigViaje;
    }
    cout<<aux->idViaje<<";"<<aux->origen<<";"<<aux->destino<<";"<<aux->fechaSalida<<";"<<aux->fechaLegada<<";"<<aux->precio<<";"<<aux->numPlazas<<" -> ";
}

/*void AgenciaViajes :: MostrarListaHotel(){
    cout<<"Lista Hotel: "<<endl;
    cout<<endl;
    pnodoHotel aux = listaHotel;
        //aux = pnodoViaje->listaHotel;
    while(aux->sigHotel != NULL){
        cout<<aux->idHotel<<";"<<aux->idHotel<<";"<<aux->nombre<<";"<<aux->categoria<<";"<<aux->ciudad<<";"<<aux->precioHabIndividual<<";"<<aux->precioHabDoble<<" -> ";
        aux = aux->sigHotel;

    }
    cout<<aux->idViaje<<";"<<aux->idHotel<<";"<<aux->nombre<<";"<<aux->categoria<<";"<<aux->ciudad<<";"<<aux->precioHabIndividual<<";"<<aux->precioHabDoble<<" -> ";
}
*/

/*bool AgenciaViajes::ViajeExistente(int idV)
{
    pnodoViaje aux = primerViaje;
    while ( aux->sigViaje != primerViaje){
        if (aux->idViaje == idV)
            return true;
        aux = aux->sigViaje;
    }
    if (aux->idViaje == idV)
        return true;
    return false;
}


pnodoViaje AgenciaViajes::ViajeEncontrado(int idV)
{
    pnodoViaje aux = primerViaje;
    while ( aux -> sigViaje != primerViaje){
        if (aux->idViaje == idV)
            return aux;
        aux = aux -> sigViaje;
    }
    if (aux->idViaje == idV)
        return aux;
    return NULL;
}
*/

void AgenciaViajes::Menu(){
cout<<"________________________________________________"<<endl;
cout<<"________________________________________________"<<endl;
cout<<"AGENCIA DE VIAJES"<<endl;
cout<<"BIENVENIDO"<<endl;
cout<<"________________________________________________"<<endl;
cout<<"Digite la opcion a la que desea ingresar"<<endl;
cout<<"________________________________________________"<<endl;
cout<<"1.Consultar precio de un producto"<<endl;
cout<<"2.Consultar hoteles, viajes y transportes"<<endl;
cout<<"3.Consultar el viaje de un cliente"<<endl;
cout<<"3.1.Consultar el transporte de un cliente"<<endl;
cout<<"3.2.Consultar la resrva de un cliente"<<endl;
cout<<"________________________________________________"<<endl;
cout<<"________________________________________________"<<endl;

}
