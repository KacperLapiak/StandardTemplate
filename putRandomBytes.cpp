/////////////////// putRandomBytes() //////////////////
// Put specified number of random bytes to the file. //
// Create file if doesn't exist.					 //
// Truncate whole content every time.				 //
// Return 1 if done, return 0 if error.				 //
// parameters: path to the file, how many bytes		 //
///////////////////////////////////////////////////////

#include <fstream>
#include <time.h>
#include "fmanage.h"

using namespace std;

int fmanage::putRandomBytes(string path, long int hmb)
{
	fstream handle;
	handle.open(path, ios::out | ios::binary | ios::trunc);

	if (handle.is_open() == 1)
	{
		char byte;
		srand(time(NULL));

		for (long int i = 0; i < hmb; i++)
		{
			// Generate random number and it put to the file.
			byte = rand() % 256;
			handle << byte;
		}

		handle.close();
		
		return 1;
	}
	else
	{
		return 0;
	}
}