// Structure in C++: A structure (struct) in C++ is a user-defined data type that allows grouping of variables of different types under a single name. Structures are similar to classes but have default public access for their members.

#include <iostream>
using namespace std;

struct User
{
    const string name;
    const string email;
    int age;
    int height; 
};

int main()
{

    User user1 = {"Alice", "enalice@gmail.com", 30, 165};
    // user1.name = "Bob"; // This line will cause a compilation error because 'name' is a const member.
    cout << "Name: " << user1.name << endl;
    return 0;
}