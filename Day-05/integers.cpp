// Integers

// short int: typically at least 16 bits
// int: typically at least 16 bits, often 32 bits
// long int: typically at least 32 bits
// long long int: typically at least 64 bits

#include <iostream>
using namespace std;

int main (){
    cout << sizeof(short int) << " bytes" << endl; // 2
    cout << sizeof(int) << " bytes" << endl; // 4
    cout << sizeof(long int) << " bytes" << endl; // 8
    cout << sizeof(long long int) << " bytes" << endl; // 8

    int fun = 0x16;
    cout << fun << endl; // 22
    return 0;
}