//
// Created by AbcAeffchen on 11.07.2016.
//

#ifndef NTRU_NTRU_H
#define NTRU_NTRU_H

#include "NTL/ZZ_pE.h"
#include "NTL/ZZX.h"
#include <random>       // std::mt19937_64
#include <algorithm>    // std::shuffle
#include <vector>
#include <chrono>       // std::chrono::system_clock

using namespace NTL;
using namespace std;

class NTRU
{
private:

    unsigned long N, p, q, d_f, d_g, d;

    ZZX P, f, g;
    ZZ_pE f_p, f_q, F_p, F_q;

    mt19937_64 rgen;

    void generateKeys();

    ZZX getRandomPolynomial(long d1, long d2);

public:

    ZZ_pE h;

    NTRU(unsigned long N, unsigned long p, unsigned long q, unsigned long d_f, unsigned long d_g, unsigned long d)
            : N(N), p(p), q(q), d_f(d_f), d_g(d_g), d(d)
    {
        unsigned long long seed = std::chrono::system_clock::now().time_since_epoch().count();
        this->rgen = mt19937_64(seed);

        SetCoeff(this->P, 0, -1);
        SetCoeff(this->P, N - 1, 1);

        this->generateKeys();

        return;
    }

};


#endif //NTRU_NTRU_H
