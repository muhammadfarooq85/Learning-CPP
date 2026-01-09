// Introduction to CPP:

// CPP (C++) is a powerful, high-performance programming language widely used for system/software development, game development, and real-time simulations. It supports both procedural and object-oriented programming paradigms, making it versatile for various types of applications.

// Prerequisites and Tools:

// You just need gcc and vs code on windows or linux machine to run cpp programs.

#include "iostream"  // Including the input-output stream library means we can use standard input and output functions.
using namespace std; // Using the standard namespace means we don't have to prefix standard library names with "std::"

// Starting the cpp with traditional hello world program.

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

// Note: This is also cpp valid program but in the first code we are using more closer standard libraries to cpp.

#include "cstdio"  // Including the C standard input-output library.
using namespace std; // Using the standard namespace.

int main () {
    puts("Hello, World!\n");
    return 0;
}
