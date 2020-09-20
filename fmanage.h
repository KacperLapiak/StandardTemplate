using namespace std;

class fmanage
{
public:
	/////////////////// putRandomBytes() //////////////////
	// Put specified number of random bytes to the file. //
	// Create file if doesn't exist.					 //
	// Truncate whole content every time.				 //
	// Return 1 if done, return 0 if error.				 //
	// parameters: path to the file, how many bytes		 //
	///////////////////////////////////////////////////////
	int putRandomBytes(string, long int);

	//////////////////// readByBlock() //////////////////////
	// Read the entire file using block of indicated size. //
	// Return char table.								   //
	// Return 0 if error (as char *err[0]).				   //
	// parameters: path to the file, block size			   //
	/////////////////////////////////////////////////////////
	char* readByBlock(string, float);

	/////////////////////// rewByBlocks() //////////////////////
	// Rewrite whole file to file using specified block size. //
	// Truncate destination file every time.				  //
	// Return 0 if an error occurs.							  //
	// parameters: source path, destination path, block size  //
	////////////////////////////////////////////////////////////
	int rewByBlocks(string, string, float);

	///////////////// readLine() //////////////////
	// Read specified line from file.			 //
	// Return specific text line.				 //
	// parameters: path to the file, line number //
	///////////////////////////////////////////////
	string readLine(string, int);

	////////////////// charCounter() /////////////////
	// Count number of occurance each byte in file. //
	// Define bufor size by with file will be read. //
	// Return 0 if an error occurs.					// 
	// parameters: path to the file, bufor size		//
	//////////////////////////////////////////////////
	int asciiCharCounter(string, long int);

	///////////////////// createTmpFile() ///////////////////
	// For each calling the function, create new tmp file. //
	// Return "noerr" if succeed, return error communicate //
	// if something fails.								   //
	// parameters: path to the file, bufor size		       //
	/////////////////////////////////////////////////////////
	string createNewTmpFile(const string&);
};