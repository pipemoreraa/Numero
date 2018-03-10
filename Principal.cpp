#include "ContenedorNumero.h"

#include <iostream>
using namespace std;

int main() {
	cout << "---CREANDO CONTENEDOR DE NUMEROS---" << endl;
	cout << "-----------------------------------" << endl;
	ContenedorNumero * CNS = new ContenedorNumero();//CONTENEDOR PRINCIPAL
	ContenedorNumero * CRI = NULL;//NUMEROS IMPARES
	ContenedorNumero * CRPR = NULL;//NUMEROS PRIMOS
	cout << "---CREAR OBJETOS DINAMICOS TIPO NUMERO---" << endl;
	cout << "-----------------------------------------" << endl;
	Numero * ptr1 = new Numero(17);
	Numero * ptr2 = new Numero(15);
	Numero * ptr3 = new Numero(23);
	Numero * ptr4 = new Numero(55);
	Numero * ptr5 = new Numero(90);
	Numero * ptr6 = new Numero(21);
	Numero * ptr7 = new Numero(98);
	Numero * ptr8 = new Numero(11);
	cout << "---INGRESANDO VALORES AL CONTENEDOR PRINCIPAL---" << endl;
	cout << "------------------------------------------------" << endl;
	CNS->ingresaValor(*ptr1);
	CNS->ingresaValor(*ptr2);
	CNS->ingresaValor(*ptr3);
	CNS->ingresaValor(*ptr4);
	CNS->ingresaValor(*ptr5);
	CNS->ingresaValor(*ptr6);
	CNS->ingresaValor(*ptr7);
	CNS->ingresaValor(*ptr8);
	cout << "---IMPRIMIR EL CONTENEDOR PRINCIPAL---" << endl;
	cout << "--------------------------------------" << endl;
	cout << CNS->toString() << endl;
	cout << "---GENERAR REPORTE GRACIAS AL CONTENEDOR DE IMPARES---" << endl;
	cout << "------------------------------------------------------" << endl;
	CRI = CNS->activaClasificacion(new EstrategiaEstablecerImpar());
	cout << CRI->toString() << endl;
	cout << "---GENERAR REPORTE GRACIAS AL CONTENEDOR DE PRIMOS---" << endl;
	cout << "-----------------------------------------------------" << endl;
	CRPR = CNS->activaClasificacion(new EstrategiaEstablecerPrimo());
	cout << CRPR->toString() << endl;
	system("pause");
	return 0;
}