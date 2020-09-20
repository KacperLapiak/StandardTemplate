/////////////////// isPrimeNumber() ////////////////////
// Return 1 if number is prime number and 0 if isn't. //
// parametrs: number to check						  //
////////////////////////////////////////////////////////
#include "malgorithm.h"

bool malgorithm::isPrimalNumber(long long int numb)
{
    if (numb == 1) { return 0; }
    else if (numb == 2) { return 1; }
    else
    {
        long long int cntr = 2;
        while (cntr < numb)
        {
            if (numb % cntr == 0) { return 0; }
            if (cntr == numb - 1) { return 1; }
            cntr++;
        }
    }
}