//////////////////////////////// sortSelect() //////////////////////////////////
// SELECTION SORT ALGORITHM													  //
// Sort given table.														  //
// Don't return anything (remember you work on original table).				  //
// parameters: pointer on int table, number of elements, mode (0-asc, 1-desc) //
////////////////////////////////////////////////////////////////////////////////
#include "malgorithm.h"

void malgorithm::sortSelect(int* tab, int size, bool mode)
{
	int buf, id_m, val_m;
	buf = id_m = val_m = 0;

	if (mode == 0)
	{
		for (int i = 0; i < size; i++)			// Iterate over each element.
		{
			buf = tab[i];						// Buffer for value of current element (constant).
			val_m = tab[i];						// Buffer for value of current element (variable).
			for (int a = i; a < size; a++)		// Iterate from current element to end.
			{
				if (tab[a] <= val_m)			// If current element is less than min value.
				{
					val_m = tab[a];				// Variable value_max contain new minimal value.
					id_m = a;					// And position of new maximal value must be capture.
				}
			}
			tab[i] = tab[id_m];					// First of unsorted element gets new minimal element.
			tab[id_m] = buf;					// The value from buffer is putted in place of sorted element.
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			buf = tab[i];
			val_m = tab[i];
			for (int a = i; a < size; a++)
			{
				if (tab[a] >= val_m)
				{
					val_m = tab[a];
					id_m = a;
				}
			}
			tab[i] = tab[id_m];
			tab[id_m] = buf;
		}
	}
}