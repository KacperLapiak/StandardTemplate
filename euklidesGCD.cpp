/////////////////// euklidesGCD() //////////////////
// Return Greates Common Divisor for two numbers. //
// parameters: double, double                     //
////////////////////////////////////////////////////
#include "malgorithm.h"

double malgorithm::euklidesGCD(double a, double b)
{
	while (a != b)
	{
		if (a > b) { a -= b; }
		else { b -= a; }
	}

	return a; // It can be b - doesn't matter.
}