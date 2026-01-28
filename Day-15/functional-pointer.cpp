// Functional Pointer Example in C++:

// Function pointers in C++ allow you to store the address of a function and call it later. This program demonstrates how to use function pointers to point to different functions and invoke them.

#include <iostream>
using namespace std;

// Function that adds two integers
int add(int a, int b) {
    return a + b;
}   

// Function that multiplies two integers
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Declare a function pointer that can point to functions taking two int parameters and returning an int
    int (*funcPtr)(int, int);

    // Point to the add function
    funcPtr = add;
    cout << "Addition: " << funcPtr(5, 3) << endl; // Output: 8

    // Point to the multiply function
    funcPtr = multiply;
    cout << "Multiplication: " << funcPtr(5, 3) << endl; // Output: 15

    return 0;
}