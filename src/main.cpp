#include <iostream>
#include "NTRU.h"

using namespace std;

int main()
{
    // Example
    NTRU ntru(53,3,6,8,6,5);

    ZZX m;
    SetCoeff(m,0,1);
    SetCoeff(m,1,1);
    SetCoeff(m,2,1);
    SetCoeff(m,3,1);
    SetCoeff(m,4,1);
    SetCoeff(m,5,-1);
    SetCoeff(m,6,-1);
    SetCoeff(m,7,-1);
    SetCoeff(m,8,-1);
    SetCoeff(m,9,-1);
    SetCoeff(m,10,1);
    SetCoeff(m,11,1);
    SetCoeff(m,12,1);
    SetCoeff(m,13,1);
    SetCoeff(m,14,1);

    ZZ_pX e = ntru.encrypt(m);

    ZZX m2 = ntru.decrypt(e);

    cout << "Message: " << m << endl;
    cout << "Encoded: " << e << endl;
    cout << "Decoded: " << m2 << endl;

    return 0;
}