////////////////// readLine() /////////////////
// Read specified line from file.			 //
// Return specific text line.				 //
// Return "0" if error.						 //
// parameters: path to the file, line number //
///////////////////////////////////////////////

#include <fstream>
#include <string>
#include "fmanage.h"

using namespace std;

string fmanage::readLine(string path, int pos)
{
	fstream handle;
	handle.open(path, ios::in);
	handle.seekg(0, ios_base::beg);
	
	if (handle.is_open() == 1)
	{
		string buffer; int cntr = 1;
		while (getline(handle, buffer))
		{
			if (cntr == pos)
			{
				return buffer;
			}

			cntr++;
		}

		handle.close();
	}
	else
	{
		return "Error: readLine()";
	}
	

}