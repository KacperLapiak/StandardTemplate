////////////////////// binStrToInt() //////////////////////
// Convert string binary representation to intiger value //
// parameters: string binary representatnion             //
///////////////////////////////////////////////////////////
#include "myalgorithm.h"

int myAlgorithm::binStrToInt(string str)
{
	return stoi(str, 0, 2);
}