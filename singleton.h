#include "header.h"

using namespace std;

class Singleton
{
private:
    Singleton() {};                 // konstruktor domyœlny musi byæ prywatny
    Singleton(const Singleton&) {}; // konstruktor kopiuj¹cy te¿ musi byæ prywatny (chyba)
    ~Singleton() {}                 // destruktor te¿ musi byæ prywatny (chyba)

public:
    static Singleton& instance()
    {
        static Singleton instance_; // zmienna statyczna, wiêc instance_ jest tworzona podczas pierwszego wywo³ania funkcji
        return instance_;           // zwracamy t¹ instancjê, i mo¿emy z niej wywo³aæ metodê doSomething(), patrz. linia 27
    }

    void doSomething()
    {
        cout << "I am the only one!" << endl;
    }

    int check = 0;
};