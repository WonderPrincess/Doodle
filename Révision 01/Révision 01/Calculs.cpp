#include "Calculs.h"


Calculs::Calculs(void)
{
}


Calculs::~Calculs(void)
{
}



double Calculs::add(double x, double y)
{
	return x + y;
}

double Calculs::substract(double x, double y)
{
	if (x >= y)
		return x - y;
	
	else return y - x;
}

double Calculs::multiply(double x, double y)
{
	return x * y;
}

double Calculs::divide(double x, double y)
{
	return x / y;
}

