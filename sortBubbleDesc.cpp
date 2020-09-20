///////////////////////// sortBubbleDesc() ////////////////////////
// BUBBLE SORT ALGORITHM										 //
// Sort descending given table.									 //
// Don't return anything (remember you work on original table).  //
// parameters: pointer on int table, number of elements			 //
///////////////////////////////////////////////////////////////////
#include "malgorithm.h"

void malgorithm::sortBubbleDesc(int* tab, int size)
{
	int buf;
	for (int a = 0; a < size; a++)
	{
		for (int b = 0; b < size - 1; b++)
		{
			if (tab[b] < tab[b + 1])
			{
				buf = tab[b + 1];
				tab[b + 1] = tab[b];
				tab[b] = buf;
			}
		}
	}
}