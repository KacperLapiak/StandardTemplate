/////////////////////// rewByBlocks() //////////////////////
// Rewrite whole file to file using specified block size. //
// Return 0 if an error occurs.							  //
// Truncate destination file every time.				  //
// parameters: source path, destination path, block size  //
////////////////////////////////////////////////////////////

#include <fstream>
#include "fmanage.h"

using namespace std;

int fmanage::rewByBlocks(string src, string dest, float bsize)
{
	char* buffer = new char[bsize];	// Create buffer.
	
	fstream handle1;
	handle1.open(src, ios::in | ios::binary);

	fstream handle2;
	handle2.open(dest, ios::out | ios::binary | ios::trunc);

	if ((handle1.is_open() == 1) && (handle2.is_open() == 1))
	{
		handle1.seekg(0, ios_base::end);				// ustaw wewnêtrzny wskaŸnik na koñcu pliku
		int blocks_number = (handle1.tellg()/bsize);	// (iloœæ bajtów / wielkoœæ bufora) == iloœæ bloków (iteracji pêtli przepisuj¹cej)
		handle1.seekg(0, ios_base::beg);				// ustaw wewnêtrzny wskaŸnik na pocz¹tek pliku
		
		char* buffer = new char[bsize];					// Dynamic buffer equal to bsize.

		float inn_crs_pos = bsize;
		for (int i = 0; i < blocks_number; i++)			// wykonuj tyle razy ile bloków nale¿y zczytaæ, co wynika z powy¿szych
		{
			handle1.read(buffer, bsize);				// Take bsize bytes from file and put into the buffer.
			handle1.seekg(inn_crs_pos, ios_base::beg);	// przestaw wewnêtrzny wskaŸnik pliku Ÿród³owego o bsize pozycji wzglêdem pozycji aktualnej
			handle2.write(buffer, bsize);				// wczytaj dane z bufora do pliku
			inn_crs_pos += bsize;						// nowa pozycja kursora przesuniêta o wielkoœæ bufora
		}

		handle1.close();
		handle2.close();
		return 1;
	}
	else
	{
		return 0;
	}
}