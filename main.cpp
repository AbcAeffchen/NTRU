#include <iostream>
#include "NTRU.h"
#include "NTL/version.h"

using namespace std;

int main()
{
    cout << NTL_VERSION << endl;

    NTRU ntru(53,3,64,8,6,5);


    return 0;
}