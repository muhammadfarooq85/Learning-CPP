// Constructor and Destructor Example in C++:

// Construtctor is a special member function that is automatically called when an object of a class is created. It is used to initialize the object's data members. Destructor, on the other hand, is called when an object goes out of scope or is explicitly deleted. It is used to clean up resources that the object may have acquired during its lifetime.

// What is rule of three in classes?

// The rule of three states that if a class requires a user-defined destructor, copy constructor, or copy assignment operator, it likely requires all three. This is because these three functions are responsible for managing the resources that the class uses, such as dynamic memory, file handles, or network connections. If one of these functions is defined, it usually indicates that the class is managing resources that need to be properly copied and cleaned up.

#include "iostream"
using namespace std;

class Sample
{
public:
    // Constructor
    Sample()
    {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Sample()
    {
        cout << "Destructor called!" << endl;
    }
};

int main()
{

    // Creating an object of Sample class
    Sample obj;

    return 0;
}
