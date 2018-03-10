#include "ContenedorNumero.h"

ContenedorNumero::ContenedorNumero()
{
	can = 0;
	tam = 20;
	for (int i = 0; i < tam; i++) {
		vec[i] = NULL;
	}
}

ContenedorNumero::~ContenedorNumero() { 
	cout << "Eliminando elementos del contenedor" << endl; 
	delete[] vec; 
}

ContenedorNumero::ContenedorNumero(const ContenedorNumero & contPtr){
	this->can = contPtr.can;
	this->tam = contPtr.tam;
	delete[] vec;
	for (int i = 0; i < can; i++) {
		vec[i] = contPtr.vec[i];
	}
}//Tarea Moral

bool ContenedorNumero::ingresaValor(Numero & numPtr)
{
	if (can < tam) {
		vec[can++] = (Numero*)&numPtr;
		return true;
	}
	else {
		return false;
	}
}

string ContenedorNumero::toString()
{
	stringstream r;
	r << "---REPORTE DE ESTRATEGIA---" << endl;
	for (int i = 0; i < can; i++) {
		r << vec[i]->toString();
	}
	r << "---------------------------" << endl;
	return r.str();
}
/*METODO MAS IMPORTANTE ---> combina la estrategia con los elementos que tiene la coleccion
  Ver como este metodo retorna un objeto dinamico tipo ContenedorNumero
  para luego ser impreso... etc...*/
ContenedorNumero * ContenedorNumero::activaClasificacion(EstrategiaAlgoritmica * EstrategiaX)
{
	ContenedorNumero * contNum = new ContenedorNumero(); //Para agregar informacion
	// Hay que "pasarle" por encima toda la coleccion de elementos...
	// y a cada elemento le aplicamos la estrategia.

	for (int i = 0; i < can; i++) {
		if (EstrategiaX->evaluaNumero(vec[i]) == true) {// * por la desreferencia
			contNum->ingresaValor(*new Numero(*vec[i])); //Utilizando el contenedor copia de numero
		}
	}
	return contNum;
}
