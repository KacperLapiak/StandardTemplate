#include "header.h"

///////////////////// intToBinStr() //////////////////////
// Return string binary representatnion of given value. //
// assumption: value is greater than zero               //
// parameters: intiger value                            //
//////////////////////////////////////////////////////////
string intToBinStr(int val)
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

////////////////////// binStrToInt() //////////////////////
// Convert string binary representation to intiger value //
// parameters: string binary representatnion             //
///////////////////////////////////////////////////////////
int binStrToInt(string str)
{
	return stoi(str, 0, 2);
}

/////////////////// logic operations //////////////////////
int bitXOR(int val, int mask)
{
	return val ^ mask;
}

string bitStrXOR(string str, short mask)
{
	string buf{};
	for (int i = 0; i < str.length(); i++)
		buf += (int)str[i] ^ mask;

	return buf;
}