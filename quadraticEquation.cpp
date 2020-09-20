/////////////////////////// quadraticEquation() //////////////////////////////
// If one solution exist, return pointer on double table: [res, 0, 1]		//
// If two solution exist, return pointer on double table: [res1, res2, 2]	//
// If solution doesn't exist, return pointer on double table: [0, 0, 0]		//
// parameters: x, a, b, c													//
//////////////////////////////////////////////////////////////////////////////
#include "malgorithm.h"

using namespace std;

double* malgorithm::quadraticEquation(double x, double a, double b, double c)
{
	double* res = new double[3]{};				// bo tylko dynamicznie zarezerwowana tablica mo¿e byæ zwrócona poprawnie
	double delta = pow(b, 2) - (4 * a * c);

	if (delta > 0)
	{
		res[0] = (-b - sqrt(delta)) / (2 * a);
		res[1] = (-b + sqrt(delta)) / (2 * a);
		res[2] = 1;
		return res;
	}
	else if (delta == 0)
	{
		res[0] = -b / (2 * a);
		res[2] = 2;
		return res;
	}
	else if (delta < 0)
	{
		res[2] = 0;
		return res;
	}

	delete[] res;
}