#include "Numero.h"

Numero::Numero() { this->valor = 0; }

Numero::Numero(int valor){this->valor = valor;}

Numero::Numero(Numero & numPtr) { valor = numPtr.getValor(); }

Numero::~Numero(){}

int Numero::getValor()
{
	return valor;
}

string Numero::toString()
{
	stringstream r;
	r << "Valor: " << valor << endl;
	return r.str();
}
