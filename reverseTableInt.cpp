//////////////////// reverseTableInt() ///////////////////
// Invert order of int table cells.						//
// Return pointer on inverted table.					//
// parameters: pointer on int table, number of elements	//
//////////////////////////////////////////////////////////
#include "malgorithm.h"

using namespace std;

int* malgorithm::reverseTableInt(int* tab, int cells)
{
	// It's necessary to create buffer
	// because of we get refference as tab
	int* buf_tab = new int[cells];
	buf_tab = tab;
	
	for (int i = 0; i < (cells / 2); i++)
	{
		int buf;
		buf = buf_tab[cells - i - 1];
		buf_tab[cells - i - 1] = tab[i];
		buf_tab[i] = buf;
	}

	return buf_tab;
}