// Generic Programming 

// Generic programming is a programming paradigm that focuses on writing code that can work with any data type. It allows developers to create functions and classes that can operate on different types of data without the need for code duplication. It is strongle associated with STL (Standard Template Library) in C++.

// It gives you inbuilt data structures and algorithms that can be used with any data type. It also allows you to create your own generic functions and classes using templates. like doubly lnked list, stack, queue, etc.
// Generic programming is also called run time polymorphism because the same function or class can work with different data types at runtime.

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main (){
    cout << "Addition of integers: " << add(5, 10) << endl; // Works with integers
    cout << "Addition of doubles: " << add(5.5, 10.5) << endl; // Works with doubles
    cout << "Addition of strings: " << add(string("Hello, "), string("World!")) << endl; // Works with strings
    return 0;
}