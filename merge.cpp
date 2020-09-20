////////////////////////////////////////// merge() //////////////////////////////////////////
// SELECTION SORT ALGORITHM	(recursive has to be implement in future).			     	   //
// Sort given table.																	   //
// Don't return anything (remember you work on original table).							   //
// parameters: pointer on int table, p - first element, q - split element, r - end element //
/////////////////////////////////////////////////////////////////////////////////////////////
#include "malgorithm.h"

void malgorithm::merge(int* tab_src, int p, int q, int r)
{
	int n1 = q - p + 1;				// number of elements in first table
	int n2 = r - q;					// number of elements in second table

	// create tables
	int* tab_a = new int[n1 + 1];	// +1 for guardian
	int* tab_b = new int[n2 + 1];	// +1 for guardian
	tab_a[n1] = INT_MAX;			// set guardian
	tab_b[n1] = INT_MAX;			// set guardian

	// fill in created tables
	for (int i = 0; i < n1; i++) {
		tab_a[i] = tab_src[p + i];
	}

	for (int i = 0; i < n2; i++) {
		tab_b[i] = tab_src[q + i + 1];
	}

	// ASSUMPTION - These tables must be sorted
	sort(tab_a, tab_a + (q - p + 1));
	sort(tab_b, tab_b + (r - q));

	// merge
	int a, b;
	a = b = 0;
	for (int i = p; i < (r - p + 1); i++) {	// (r-p+1) == number of elements
		if (tab_a[a] <= tab_b[b])
		{
			tab_src[i] = tab_a[a];
			a++;
		}
		else
		{
			tab_src[i] = tab_b[b];
			b++;
		}
	}

	delete[] tab_a, tab_b;
}