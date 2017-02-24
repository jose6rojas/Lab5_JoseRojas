// clase Funcion Polinomica

#ifndef FUNCIONPOLINOMICA_H
#define FUNCIONPOLINOMICA_H

#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class FuncionPolinomica
{
	private:
		int grado; // n
	public:
		vector<int> coefs;
		
		FuncionPolinomica();
		FuncionPolinomica(int);
		// FuncionPolinomica(FuncionPolinomica*);
		
		int getGrado();
		void setGrado(int);
		
		int getCoef(int);
		void setCoef(int);
		
		void toString()
		{
			stringstream ss;
			ss << "f(x) = ";
			int cont = grado;
			for(int i = 0; i <= grado; i++, cont--)
			{
				if(i == grado)
				// if(i == 0)
					ss << "" << coefs[i];
				else
					ss << coefs[i] << "x" << "^" << cont << " + ";
			}
			cout << ss.str() << endl;
		}
		string operator<<()
		{
			stringstream ss;
			ss << "f(x) = ";
			int cont = grado;
			for(int i = 0; i <= grado; i++, cont--)
			{
				if(i == grado)
					ss << "" << coefs[i];
				else
					ss << coefs[i] << "x" << "^" << cont << " + ";
			}
			string funcion = ss.str;
			return funcion;
		}
		
		FuncionPolimonica operator+(FuncionPolimonica&);
		
		/* FuncionPolinomica* operator+(FuncionPolinomica* A, FuncionPolinomica* B)
		{
			FuncionPolinomica* C;
			if(A -> getGrado() > B -> getGrado())
			{
				C = new FuncionPolinomica(A -> getGrado());
				
				int diferencia = A -> getGrado() - B -> getGrado();
				for(int i = 0; i < diferencia; i++)
					C -> setCoef(A -> coef[i]);
				
				for(int i = 0; i <= B -> getGrado(); i++)
					C -> coefs[i] = (A -> coefs[i] + B -> coefs[i]);
				return C;
			}
			else
			{
				C = new FuncionPolinomica(B -> getGrado());
				
				int diferencia = B -> getGrado() - A -> getGrado();
				for(int i = 0; i < diferencia; i++)
					C -> setCoef(B -> coef[i]);
				
				for(int i = 0; i <= A -> getGrado(); i++)
					C -> coefs[i] = (B -> coefs[i] + A -> coefs[i]);
				return C;
			}
		} */
		
		/* FuncionPolinomica operator+(FuncionPolinomica& FP)
		{
			if(grado != FP.grado)
			{
				if(grado < FP.grado)
				{
					FuncionPolimonica retVal(FP.grado + 1);
					for(int i = 0; i <= grado; i++)
						retVal.coefs[i] = this -> coefs[i] = FP.coefs[i];
					for(int i = grado + 1; i <= FP.grado; i++)
						retVal.coefs[i] = FP.coefs[i];
					return retVal;
				}
				else
				{
					FuncionPolimonica retVal(grado + 1);
					for(int i = 0; i <= FP.grado; i++)
						retVal.coefs[i] = this -> coefs[i] + FP.coefs[i];
					for(int i = FP.grado + 1; i <= grado; i++)
						retVal.coefs[i] = this -> coefs[i];
					return retVal;
				}
			}
			else
			{
				FuncionPolimonica retVal(grado + 1);
				for(int i = 0; i <= grado; i++)
					retVal.coefs[i] = this -> coefs[i] + FP.coefs[i];
			}
			return retVal;
		} */
};

#endif
