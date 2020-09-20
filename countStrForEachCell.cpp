//////////////////////// countStrForEachCell() ///////////////////////
// Count numbers of characters in each string from string table.	//
// Return results as int table. Every cell contains number of		//
// characters for corresponding string from given string table.		//
// parameter: pointer on string table								//
//////////////////////////////////////////////////////////////////////
#include "malgorithm.h"

using namespace std;

int* malgorithm::countStrForEachCell(string* tab)
{
	int* tab_int= new int[tab->length()+1];

	for (int i = 0; i < tab->length()+1; i++)
	{
		tab_int[i] = tab[i].length();
	}

	return tab_int;
}