// Null Ptr in cpp:

// Nullptr is a keyword introduced in C++11 to represent a null pointer constant. It provides a type-safe way to indicate that a pointer does not point to any object or function. It is preferred over the traditional NULL macro or 0 literal because it avoids ambiguity in overload resolution and improves code clarity.

#include <iostream>
using namespace std;

int main()
{
    int *ptr = nullptr; // Using nullptr to initialize a null pointer

    if (ptr == nullptr)
    {
        cout << "The pointer is null." << endl;
    }
    else
    {
        cout << "The pointer is not null." << endl;
    }

    return 0;
}