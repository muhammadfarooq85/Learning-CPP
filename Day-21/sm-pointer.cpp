// Smart Pointer in Cpp:

// A smart pointer is an abstract data type that simulates a pointer while providing additional features, such as automatic memory management. Smart pointers help prevent memory leaks and dangling pointers by ensuring that memory is properly deallocated when it is no longer needed. In C++, smart pointers are implemented as template classes in the Standard Library, primarily through the <memory> header. The most commonly used smart pointers in C++ are std::unique_ptr, std::shared_ptr, and std::weak_ptr.

#include <iostream>
#include <memory> // for smart pointers
using namespace std;

class User
{
public:
    User()
    {
        cout << "User created: " << endl;
    }
    ~User()
    {
        cout << "User destroyed: " << endl;
    }

    void display()
    {
        cout << "I am a test function" << endl;
    }
};

int main()
{
    unique_ptr<User> alt = make_unique<User>(); // creates a unique pointer to a User objectI
    alt->display(); // Accessing the member function using the unique pointer
    return 0;
}