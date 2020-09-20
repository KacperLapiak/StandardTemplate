#include "header.h"

using namespace std;

class Singleton
{
private:
    Singleton() {};                 // konstruktor domy�lny musi by� prywatny
    Singleton(const Singleton&) {}; // konstruktor kopiuj�cy te� musi by� prywatny (chyba)
    ~Singleton() {}                 // destruktor te� musi by� prywatny (chyba)

public:
    static Singleton& instance()
    {
        static Singleton instance_; // zmienna statyczna, wi�c instance_ jest tworzona podczas pierwszego wywo�ania funkcji
        return instance_;           // zwracamy t� instancj�, i mo�emy z niej wywo�a� metod� doSomething(), patrz. linia 27
    }

    void doSomething()
    {
        cout << "I am the only one!" << endl;
    }

    int check = 0;
};