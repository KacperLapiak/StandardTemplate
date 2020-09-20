/////////////////////// findMinimum() ////////////////////////
// Find minimum value from table contains different values.	//
// parameters: pointer on float table						//
//////////////////////////////////////////////////////////////
#include "malgorithm.h"

using namespace std;

float malgorithm::findMinimum(float* tab)
{
	float buf = tab[0];
	for (int i = 1; i <= sizeof(tab)-1; i++)
	{
		if (tab[i] < buf)
		{
			buf = tab[i];
		}
	}

	return buf;
}