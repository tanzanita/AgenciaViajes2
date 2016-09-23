/*
INSTUTUTO TECNOLÓGICO DE COSTA RICA
ESCUELA DE COMPUTACION
ESTRUCTURA DE DATOS
PRIMER PROYECTO PROGRAMADO: AGENCIA DE VIAJES
ESTUDIANTE CAMILA VÍQUEZ ALPIZAR
PROFESORA: ING.IVANNIA CERDAS QUESADA

*/
#include <iostream>
#include <AgenciaViajes.h>

using namespace std;

int main()
{
    AgenciaViajes agencia;
    agencia.lecturaArchivosViaje("Viajes.txt");
    agencia.MostrarListaViajes();
    agencia.lecturaArchivosHotel("Hoteles.txt");
    agencia.lecturaArchivosTransporte("Transportes.txt");
    agencia.lecturaArchivosOferta("OfertasHoteles.txt");
    agencia.Menu();



    return 0;
}
