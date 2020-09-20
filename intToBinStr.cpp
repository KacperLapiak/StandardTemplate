///////////////////// intToBinStr() //////////////////////
// Return string binary representatnion of given value. //
// assumption: value is greater than zero               //
// parameters: intiger value                            //
//////////////////////////////////////////////////////////
#include "myalgorithm.h"

using namespace std;

string myAlgorithm::intToBinStr(int val)
{
	string binary{};

	while (val > 0)
	{
		if (val % 2 == 0) binary.insert(0, "0");
		else binary.insert(0, "1");
		val /= 2;
	}

	return binary;
}