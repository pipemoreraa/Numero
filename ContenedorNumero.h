#pragma once
#include "Numero.h"
#include "EstrategiaAlgoritmica.h"

class ContenedorNumero {
private:
	Numero * vec[20];
	int can;
	int tam;
public:
	ContenedorNumero();
	~ContenedorNumero();
	ContenedorNumero(const ContenedorNumero &);
	bool ingresaValor(Numero &);
	string toString();

	/*Metodo que activa la estrategia a usar para generar un reporte 
	o para crear y llenar otro contenedor... etc...*/

	ContenedorNumero * activaClasificacion(EstrategiaAlgoritmica *);


};