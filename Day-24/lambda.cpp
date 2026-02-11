// Lambada in CPP:

// A lambda expression is an anonymous function that can be defined and called inline. It allows you to create a function without giving it a name, making it useful for short, one-off functions that are not reused elsewhere in the code.

#include <iostream>
using namespace std;

int main()
{
    // lambda expression syntax: [capture list](parameters) -> return type { function body }
    []()
    { cout << "Hello World!" << endl; }();

    auto add = [](auto a, auto b) -> auto
    { return a + b; };
    cout << "Sum: " << add(5, 10) << endl;
    cout << "Sum: " << add(2.4, 10.5) << endl;

    return 0;
}