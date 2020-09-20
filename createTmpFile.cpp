#include <windows.h>
#include <string>
#include <fstream>
#include "fmanage.h"

using namespace std;

string fmanage::createNewTmpFile(const string& pathAndBaseName)
{
	static int number = 0;
	string name = pathAndBaseName + to_string(number) + ".txt";
	fstream file(name, ios_base::out | ios_base::trunc);
	if (file.is_open()) file.close();
	else return "error: fstream";
	number++;
	return "noerr";
}