#pragma once
#include "Numero.h"

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class EstrategiaAlgoritmica {//INTERFAZ --- M.V.P
public:
	EstrategiaAlgoritmica() {}
	virtual ~EstrategiaAlgoritmica() {}//Destructores virtuales si hay una herencia.
	virtual bool evaluaNumero(Numero *) = 0;
};

class EstrategiaEstablecerPrimo:public EstrategiaAlgoritmica{
public:
	EstrategiaEstablecerPrimo() {}
	bool evaluaNumero(Numero * numPtr){
		for (int i = 2; i < numPtr->getValor(); i++) {
			if (numPtr->getValor() % i == 0) {
				return false;
			}
		}
		return true;
	}
};

class EstrategiaEstablecerImpar:public EstrategiaAlgoritmica{
public:
	bool evaluaNumero(Numero * numPtr) {
		return (numPtr->getValor() % 2 != 0);
	}
};

