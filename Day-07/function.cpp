// Function Basics in Cpp

// Function is a block of code that performs a specific task. It is defined once and can be called multiple times throughout the program. Functions help in organizing code, improving readability, and reusing code.

#include <iostream>
using namespace std;

// Function Declaration
void greet();                        // Function prototype
int add(int a, int b);               // Function prototype with parameters
void displayMessage(string message); // Function prototype with parameter
int multiply(int a, int b = 2);      // Function prototype with default parameter
int factorial(int n);                // Function prototype for recursive function
void swap(int &x, int &y);           // Function prototype for pass by reference

int main()
{
    // Function Call    
    greet(); // Calling function without parameters

    int sum = add(5, 10); // Calling function with parameters
    cout << "Sum: " << sum << endl;

    displayMessage("Hello, World!"); // Calling function with string parameter

    int product1 = multiply(5);    // Calling function with one argument (default parameter)
    int product2 = multiply(5, 3); // Calling function with two arguments
    cout << "Product1: " << product1 << ", Product2: " << product2 << endl;

    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl; // Calling recursive function

    int a = 10, b = 20;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    swap(a, b); // Calling function to swap values
    cout << "After Swap: a = " << a << ", b = " << b << endl;

    return 0;
}