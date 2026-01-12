// Array 

// Array in C++ is a collection of elements of the same type stored in contiguous memory locations.

#include "iostream"
using namespace std;

int main (){
    int scores[5] = {100, 90, 80, 70, 60}; // Declaration and initialization of an array

    // array counting start from zero.

    cout << "First score: " << scores[0] << endl; // Accessing the first element
    return 0;
}