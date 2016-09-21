#include <iostream>
#include <AgenciaViajes.h>

using namespace std;

int main()
{
    AgenciaViajes *agencia = new AgenciaViajes();
    //AgenciaViajes.lecturaArchivos("Viajes.txt");
    cout<< "Viajes:";
    cout<<endl;
    agencia->lecturaArchivos("Viajes.txt");

    return 0;
}
