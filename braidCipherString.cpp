///////////////////// braidCipherString() ////////////////////
// Change order of adjacent characters. If number of all	//
// characters is odd, the last one remains unchanged.		//
// parameter: string for encryption							//
//////////////////////////////////////////////////////////////
#include "malgorithm.h"

string malgorithm::braidCipherString(string str)
{
	for (int i = 0; i < str.length() - 1; i += 2)
	{
		char buf = str[i];
		str[i] = str[i + 1];
		str[i + 1] = buf;
	}

	return str;
}