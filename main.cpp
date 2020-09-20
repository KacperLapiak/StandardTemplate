#include "header.h"
#include "malgorithm.h"
#include "fmanage.h"
#include "stack.h"
#include "builder.h"
#include "process.h"
#include "logic.h"
#include "state.h"
#include "singleton.h"

using namespace std;
int main(int argc, char** argv, char** envp)
{
    // test fmanage
    {
        // putRandomBytes
        fmanage fm;
        fm.putRandomBytes("file.txt", 1024);

        // create 10 temporary files
        for(int i=0; i<3; i++)
            cout << fm.createNewTmpFile("C:/tmpfiles/basename") << endl;
        cout << endl;
    }

    // test myalgorithm
    {
        // reverseTableInt
        malgorithm mal;
        int tab[5]{ 1, 2, 3, 4, 5 };
        mal.reverseTableInt(tab, 5);
        for (int i = 0; i < size(tab); i++)
            cout << tab[i] << " ";
    }
    
    // test stack
    {
        // stack
        stack stack;
        stack.addElement(5);
        stack.addElement(3);
        stack.addElement(2);
        cout << endl << stack.top();

        stack.remElement();
        cout << " " << stack.top();

        stack.remElement();
        cout << " " << stack.top();
    }

    // test builder
    {
        // builder
        cout << "\n\n" << "productOne: \n";
        ConcreteBuilder* prepProduct = new ConcreteBuilder();
        prepProduct->ProducePartA()->ProducePartB()->ProducePartC();

        Product* productOne = prepProduct->GetProduct();
        productOne->showProduct();

        cout << "\n" << "productTwo (director): \n";
        ConcreteBuilder* prepProductTwo = new ConcreteBuilder();
        Director* director = new Director();
        director->setBuilder(prepProductTwo);
        director->BuildSpecificProduct();

        Product* productTwo = new Product();
        productTwo = prepProductTwo->GetProduct();
        productTwo->showProduct();
        delete prepProduct, productOne, productTwo;
    }

    // test logic
    {
        int val = 0b10101110;
        int msk = 0b01011010;
        cout << endl << "raw txt: " << val;
        cout << endl << "msk: " << msk;
        cout << endl << "val XOR msk (sipher): " << bitXOR(val, msk);
        cout << endl << "sipher XOR msk (raw txt) : " << bitXOR(bitXOR(val, msk), msk);

        cout << endl << endl << bitStrXOR("Ala ma kota", 0b01010101);
        cout << endl << bitStrXOR(bitStrXOR("Ala ma kota", 0b01010101), 0b01010101) << endl << endl;
    }

    // test state
    {
        Context state;
        state.setState(2);
        cout << "\n";
    }

    // test singleton
    {
        Singleton::instance().doSomething();             // pierwsze wywołanie funkcji
        Singleton& singleObject = Singleton::instance(); // singleObject jest referencją do jedynej instancji zwracanej przez isntance()
        singleObject.doSomething();                      // to na tej referencji wywołuję metodę doSomething()
    }

    return 0;
}