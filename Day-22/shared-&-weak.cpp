// Shared Poiner in CPP:

// Share pionter is a smart pointer which retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object. The object is destroyed and its memory deallocated when either of the following happens:

// 1. the last remaining shared_ptr owning the object is destroyed;
// 2. the last remaining shared_ptr owning the object is assigned another pointer via operator= or reset().

// Differece between unique, shared and weak pointer:

// 1. Unique pointer: A unique pointer is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique pointer goes out of scope. It cannot be copied, only moved. It is used when you want to have exclusive ownership of an object.

// 2. Shared pointer: A shared pointer is a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object. The object is destroyed and its memory deallocated when either of the following happens: the last remaining shared_ptr owning the object is destroyed; or the last remaining shared_ptr owning the object is assigned another pointer via operator= or reset(). It is used when you want to have multiple owners of an object.

// 3. Weak pointer: A weak pointer is a smart pointer that holds a non-owning ("weak") reference to an object that is managed by std::shared_ptr. It must be converted to std::shared_ptr in order to access the referenced object. It is used to break circular references in shared ownership scenarios.

#include <iostream>
#include <memory>
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
    shared_ptr<User> alxander = make_shared<User>(); // creates a shared pointer to a User object
    alxander->display();                             // Accessing the member function using the shared pointer

    shared_ptr<User> alex = alxander; // Copying the shared pointer, both alxander and alex now share ownership of the same User object
    alex->display();                  // Accessing the member function using the second shared pointer
    return 0;
}