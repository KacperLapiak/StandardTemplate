//////////////////// readByBlock() //////////////////////////
// Read the file from start using block of indicated size. //
// Return char table.									   //
// Return 0 if error (as char *err[0]).					   //
// parameters: path to the file, block size 			   //
/////////////////////////////////////////////////////////////

#include <fstream>
#include <time.h>
#include "fmanage.h"

using namespace std;

char* fmanage::readByBlock(string path, float bsize)
{
	fstream handle;
	handle.open(path, ios::in | ios::binary);

	if ((handle.is_open() == 1) && (bsize>0))
	{
		fstream handle;
		handle.open(path, ios::in | ios::binary);

		// Dynamic buffer equal to bsize.
		char* buffer = new char[bsize];

		// Take bsize bytes from file and put into the buffer.
		handle.read(buffer, bsize);

		// Return buffer as char table (pointer on char). 
		return buffer;

		handle.close();
	}
	else
	{
		// Return 0 if error (as char *err[0]).
		char *err = new char[1];
		err[0] = '0';
		return err;
	}
	
	return 0;
}