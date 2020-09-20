/////////////// asciiCharCounter() ///////////////
// Count number of occurance each byte in file. //
// Define bufor size by with file will be read. //
// Return 0 if an error occurs.					// 
// parameters: path to the file, bufor size		//
//////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <iomanip>
#include "fmanage.h"

using namespace std;

int fmanage::asciiCharCounter(string path, long int bsize)
{
	fstream handle;
	handle.open(path, ios::in | ios::binary);

	if (handle.is_open() == 1)
	{
		handle.seekg(0, ios_base::end);						// ustaw wewnêtrzny wskaŸnik na koñcu pliku
		int blocks_number = (handle.tellg() / bsize);		// iloœæ bajtów / wielkoœæ bufora == iloœæ bloków (iteracji pêtli przepisuj¹cej)
		handle.seekg(0, ios_base::beg);						// ustaw wewnêtrzny wskaŸnik na pocz¹tku pliku

		unsigned char* buffer = new unsigned char[bsize];	// bufor o wielkoœci bloku na przechowywanie i odczytywanych danych
		
		int tab[256]{ 0 };									// tablica przechowuj¹ca iloœæ wyst¹pieñ poszczególnych bajtów

		/////////////// Algorithm ///////////////
		for (int x = 0; x < blocks_number; x++){					// wykonuj tyle razy ile bloków nale¿y zczytaæ, co wynika z powy¿szych
			handle.read(reinterpret_cast<char*>(buffer), bsize);	// pobierz blok danych z pliku i zapisz do bufora rzutowanego chwilowo na char* (wymóg dla funkcji read()), ujemne exASCII rzutowane na dodatnie z zakresu 0 - 255

			for (int y = 0; y < bsize; y++){						// pêtla zczytuj¹ca kolejne bloki z pliku
				for (int z = 0; z <= 255; z++){						// pêtla sprawdzaj¹ca kolejne znaki w przeczytanym bloku
					if (int(buffer[y]) == z){						// je¿eli y-ty znak w buforze zgadza siê z z-tym numerem (ASCII jako DEC)												
						tab[z]++; break;							// inkrementuj wartoœæ jego wyst¹pienia w tablicy wyst¹pieñ i przerwij pêtlê
					}
				}
			}
		}

		////////////// Send results to the text file //////////////
		fstream fileout;
		fileout.open("asciiCharCounter.txt", ios::out | ios::trunc);
		
		fileout << "ASCII characters occurances: " << endl;

		for (int i = 0; i <= 255; i++){
			fileout << "dec(" << i << "): " << tab[i] << endl;
		}

		float all_bytes = 0;
		for (int i = 0; i <= 255; i++){
			all_bytes += tab[i];
		}
		fileout << endl << "Number of all bytes: " << all_bytes;

		handle.close();
		fileout.close();

		return 1;
	}
	else
	{
		return 0;
	}
}