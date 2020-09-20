//////////////////// euklidesLCM() ////////////////////
// Return Least Common Multiple for two numbers.     //
// Base for the algorithm is euklidesGCD() function. //
// parameters: double, double                        //
///////////////////////////////////////////////////////
#include "malgorithm.h"

double malgorithm::euklidesLCM(double a, double b)
{
	return (a * b) / euklidesGCD(a, b);
}