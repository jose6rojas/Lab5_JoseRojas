#include "FuncionPolinomica.h"

FuncionPolinomica::FuncionPolinomica()
{
	grado = 0;
}
FuncionPolinomica::FuncionPolinomica(int n)
{
	grado = n;
}
/* FuncionPolinomica::FuncionPolinomica(FuncionPolinomica* FP)
{
	grado = FP -> getGrado();
	for(int i = 0; i <= grado; i++)
		coefs[i] = FP -> coefs[i];
} */

int FuncionPolinomica::getGrado()
{
	return grado;
}
void FuncionPolinomica::setGrado(int n)
{
	grado = n;
}

int FuncionPolinomica::getCoef(int x)
{
	return coefs[x];
}
void FuncionPolinomica::setCoef(int c)
{
	coefs.push_back(c);
}

FuncionPolimonica::FuncionPolinomica operator+(FuncionPolinomica& FP)
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
}
