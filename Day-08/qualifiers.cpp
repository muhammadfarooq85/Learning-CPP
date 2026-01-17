// Qualifiers in C++

// Qualifiers are keywords in C++ that modify the properties of variables, functions, or types. They provide additional information about how a variable or function should be treated by the compiler. Common qualifiers include const, volatile, static, and mutable.

// Types of Qualifiers:

// 1) Modifier Qualifiers:
// const: Indicates that a variable's value cannot be changed after initialization.
// volatile: Tells the compiler that a variable's value may change unexpectedly, preventing certain optimizations.
// mutable: Allows a member of a const object to be modified.

// 2) Life Duration Qualifiers:
// static: Specifies that a variable or function has internal linkage or retains its value between function calls.
// extern: Declares a variable or function that is defined in another translation unit.
// register: Suggests that a variable should be stored in a CPU register for faster access (note: modern compilers often ignore this).

// Usage of Static Qualifier:

#include <iostream>
void staticExample() {
    static int count = 0; // Static variable retains its value between function calls
    count++;
    std::cout << "Static count: " << count << std::endl;
}

int main() {
    staticExample(); // Output: Static count: 1
    staticExample(); // Output: Static count: 2
    staticExample(); // Output: Static count: 3
    return 0;
}