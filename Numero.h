#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Numero {
private:
	int valor;
public:
	Numero();
	Numero(int);
	Numero(Numero &);
	~Numero();
	int getValor();
	string toString();
};