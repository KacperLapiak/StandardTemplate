///////////////////////////////// sortInsert() /////////////////////////////////
// INSERTION SORT ALGORITHM													  //
// Sort ascending/descending given table.									  //
// Don't return anything (remember you work on original table).				  //
// parameters: pointer on int table, number of elements, mode (0-asc, 1-desc) //
////////////////////////////////////////////////////////////////////////////////
#include "malgorithm.h"

void malgorithm::sortInsert(int* tab, int num, bool mode)
{
	if (mode == 0)
	{
		for (int i = 1; i < num; i++)
		{
			int key = tab[i];
			int prev = i - 1;
			while ((prev >= 0) && (tab[prev] > key))
			{
				tab[prev + 1] = tab[prev];
				prev--;
			}

			tab[prev + 1] = key;
		}
	}
	else
	{
		for (int i = 1; i < num; i++)
		{
			int key = tab[i];
			int prev = i - 1;
			while ((prev >= 0) && (tab[prev] < key))
			{
				tab[prev + 1] = tab[prev];
				prev--;
			}

			tab[prev + 1] = key;
		}
	}
}