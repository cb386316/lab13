// Simple class to illustrate separate compilation and const
// parameters
// 
// Written by Mal Gunasekera
// Modified by David M. Chelberg
// Altered by Student: Connor Barber
// last-modified: Thurs April 23 2020
// 
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "my_int.h"
#include "my-int.cc"


using namespace std;

int main(){

    my_int value1;

    my_int valu1 = 100;

    my_int valu2 = 5;

    value1.input(cin);

    value1.output(cout); 

    if (is_prime(value1))
        cout << "  is a prime number  \n";
    else
        cout << " is not a prime number \n";

    if (valu1 > valu2) {

        cout << "valu1 > valu2" << endl;

    }
    else {

        cout << "valu1 < valu2" << endl;

    }

    return 0;
}

