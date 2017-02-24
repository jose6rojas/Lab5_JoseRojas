// viernes, 24 de febrero de 2017
// Laboratorio V - Programacion III
// Jose C. Rojas H. - 11541234

#include <iostream>
#include "FuncionPolinomica.h"

using namespace std;

int main()
{
	FuncionPolinomica* FP1 = new FuncionPolinomica(5);
	int c1;
	int cont1 = 5;
	for(int i = 0; i <= FP1 -> getGrado(); i++, cont1--)
	{
		cout << "x^" << cont1 << ": ";
		cin >> c1;
		FP1 -> setCoef(c1);
	}
	FP1 -> toString();
	
	FuncionPolinomica* FP2 = new FuncionPolinomica(3);
	int c2;
	int cont2 = 3;
	for(int i = 0; i <= FP2 -> getGrado(); i++, cont2--)
	{
		cout << "x^" << cont2 << ": ";
		cin >> c2;
		FP2 -> setCoef(c2);
	}
	FP2 -> toString();
	
	cout << FP1;
	
	// FuncionPolinomica FP3();
	// FP3 = *FP1 + *FP2;
	// FP3.toString();
		
	delete FP1;
	delete FP2;
	
	return 0;
}
