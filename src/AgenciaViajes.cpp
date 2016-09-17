#include "AgenciaViajes.h"

AgenciaViajes::AgenciaViajes()
{
    //ctor
}

AgenciaViajes::~AgenciaViajes()
{
    //dtor
}


//Lectura de archiv
void AgenciaViajes::lecturaArchivos(string archivo){
	//cout << "Entra al metodo";

    fstream ficheroEntrada;
    string frase;

    ficheroEntrada.open ( archivo.c_str(), ios::in);
    if (ficheroEntrada.is_open()) {

        while (! ficheroEntrada.eof() ) {
        	getline (ficheroEntrada,frase);
        	//ficheroEntrada >> caracter;
        	//frase >> caracter;
        	//cout << frase;

            leerLinea(frase, archivo);

        }


        ficheroEntrada.close();
    }
    else cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;
}






//metodo que reciba frase, y el tipo de archivo que se lee
//que saque la informacion en una lista de strings
// llamar un metodo , el constructor de la clase respectiva, crear hotel y este va a aceptar la lista de atrings y con esta lista la asigno a los atributos de la clase
//hacer un nuevo nodo paso mi objeto de viaje o de hotell creado
//asignar el objeto al nodo



void AgenciaViajes :: leerLinea(string frase, string archivo){
	//cout << "Por procesar: " << frase << endl;
	//obtengo el largo de la linea que es frase
	int len = frase.size();

	char puntoYcoma = ';';
	string atributo;
	lista *listaAtributo = new lista();


	//Recorro la frase caracter por caracter [i] hatsa encontrar;
	for (int i=0; i<len; i++){
		if(frase[i]!= puntoYcoma ){
			atributo = atributo + frase[i];
		} else {
			listaAtributo->InsertarFinal(atributo);
			atributo.clear();
		}
	}
	//Al aggralo aqui toma todos los valores
	listaAtributo->InsertarFinal(atributo);

	if(archivo == "Viajes.txt"){

        Viajes *viaje = new Viajes(listaAtributo);
    //estructura -> append(viaje, tipo)
    //dentro de estructura hago un new Node del tipo(en este caso Nodeo Viajes), lo enlazo, asigna el valor
	}

	//switch dependiendo el nombre del archivo
			// new del objeto y le paso mi lista
	//limpiar la estructura

	//en el objeto el constructor debe recibir la lista y asignar los atrings de la estructura a los atributos




}

