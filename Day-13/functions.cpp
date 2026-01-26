// Functions in C++:

// Function is a block of code that performs a specific task. It is defined once and can be called multiple times throughout the program. Functions help in organizing code, improving readability, and reusability.

// Function Declaration: A function must be declared before it is used. The declaration includes the function's name, return type, and parameters (if any).
// Function Definition: The function definition contains the actual body of the function where the code is written.
// Function Call: To execute the function, it must be called by its name, optionally passing arguments if the function requires parameters.
// Return Type: Functions can return a value to the caller. The return type specifies the type of value that the function will return. If a function does not return a value , its return type is specified as 'void'.

#include <iostream>
using namespace std;

// Call by value:

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
}

// Call by reference:

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference: a = " << a << ", b = " << b << endl;
}

int main()
{

    int x = 10;
    int y = 20;
    cout << "Before swapByValue: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;
    cout << "-----------------------------" << endl;
    cout << "Before swapByReference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}