#include "header.h"

using namespace std;

class malgorithm
{
public:
	//////////////////// braidCipherChar() ////////////////////
	// Change order of adjacent characters. If number of all //
	// characters is odd, the last one remains unchanged.	 //
	// parameter: pointer on char table						 //
	///////////////////////////////////////////////////////////
	char* braidCipherChar(char*);

	/////////////////// braidCipherString() ///////////////////
	// Change order of adjacent characters. If number of all //
	// characters is odd, the last one remains unchanged.	 //
	// parameter: string for encryption						 //
	///////////////////////////////////////////////////////////
	string braidCipherString(string);

	/////////////////////// findMinimum() ////////////////////////
	// Find minimum value from table contains different values. //
	// parameters: pointer on float table					    //
	//////////////////////////////////////////////////////////////
	float findMinimum(float*);

	/////////////////////// findMaximum() ////////////////////////
	// Find maximum value from table contains different values. //
	// parameters: pointer on float table					    //
	//////////////////////////////////////////////////////////////
	float findMaximum(float*);

	//////////////////// reverseTableInt() ///////////////////
	// Invert order of int table cells.						//
	// Return pointer on inverted table.					//
	// parameters: pointer on int table, number of elements //
	//////////////////////////////////////////////////////////
	int* reverseTableInt(int*, int);

	////////////////////// countStrForEachCell() //////////////////////
	// Count numbers of characters in each string from string table. //
	// Return results as int table. Every cell contains number of	 //
	// characters for corresponding string from given string table.	 //
	// parameter: pointer on string table							 //
	///////////////////////////////////////////////////////////////////
	int* countStrForEachCell(string*);

	///////////////////////// quadraticEquation() //////////////////////////////
	// If one solution exist, return pointer on double table: [res, 0, 1]	  //
	// If two solution exist, return pointer on double table: [res1, res2, 2] //
	// If solution doesn't exist, return pointer on double table: [0, 0, 0]	  //
	// parameters: x, a, b, c												  //
	////////////////////////////////////////////////////////////////////////////
	double* quadraticEquation(double, double, double, double);

	///////////////////////// sortBubbleAsc() /////////////////////////
	// BUBBLE SORT ALGORITHM										 //
	// Sort ascending given table.									 //
	// Don't return anything (remember you work on original table).  //
	// parameters: pointer on int table, number of elements			 //
	///////////////////////////////////////////////////////////////////
	void sortBubbleAsc(int*, int);

	///////////////////////// sortBubbleDesc() ////////////////////////
	// BUBBLE SORT ALGORITHM										 //
	// Sort descending given table.									 //
	// Don't return anything (remember you work on original table).  //
	// parameters: pointer on int table, number of elements			 //
	///////////////////////////////////////////////////////////////////
	void sortBubbleDesc(int*, int);

	/////////////////////////// sortInsert() //////////////////////////
	// INSERTION SORT ALGORITHM									     //
	// Sort descending given table.                                  //
	// Don't return anything (remember you work on original table).  //
	// parameters: pointer on int table, number of elements          //
	///////////////////////////////////////////////////////////////////
	void sortInsert(int*, int, bool);

	//////////////////////////////// sortSelect() //////////////////////////////////
	// SELECTION SORT ALGORITHM													  //
	// Sort given table.														  //
	// Don't return anything (remember you work on original table).				  //
	// parameters: pointer on int table, number of elements, mode (0-asc, 1-desc) //
	////////////////////////////////////////////////////////////////////////////////
	void sortSelect(int*, int, bool);

	////////////////////////////////////////// merge() //////////////////////////////////////////
	// SELECTION SORT ALGORITHM	(recursive has to be implemented in future).				   //
	// Sort given table.																	   //
	// Don't return anything (remember you work on original table).							   //
	// parameters: pointer on int table, p - first element, q - split element, r - end element //
	/////////////////////////////////////////////////////////////////////////////////////////////
	void merge(int*, int, int, int);

	/////////////////// euklidesGCD() //////////////////
	// Return Greates Common Divisor for two numbers. //
	// parameters: double, double                     //
	////////////////////////////////////////////////////
	double euklidesGCD(double, double);

	//////////////////// euklidesLCM() ////////////////////
	// Return Least Common Multiple for two numbers.     //
	// Base for the algorithm is euklidesGCD() function. //
	// parameters: double, double                        //
	///////////////////////////////////////////////////////
	double euklidesLCM(double, double);

	/////////////////// isPrimeNumber() ////////////////////
	// Return 1 if number is prime number and 0 if isn't. //
	// parameters: number to check						  //
	////////////////////////////////////////////////////////
	bool isPrimalNumber(long long int);
};