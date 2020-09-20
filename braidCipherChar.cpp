///////////////////// braidCipherChar() //////////////////////
// Change order of adjacent characters. If number of all	//
// characters is odd, the last one remains unchanged.		//
// parameter: pointer on char table							//
//////////////////////////////////////////////////////////////
#include "malgorithm.h"

char* malgorithm::braidCipherChar(char* str)
{
	for (int i = 0; i < strlen(str) - 1; i += 2)
	{
		char buf = str[i];
		str[i] = str[i + 1];
		str[i + 1] = buf;
	}

	return str;
}