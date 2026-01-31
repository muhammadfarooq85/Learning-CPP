// Classes in Cpp:

#include <iostream>
#include <string>
using namespace std;

class User
{
    int secret = 22;

public:
    string name = "Muhammad";
    void displayName()
    {
        cout << "Name: " << name << endl;
    }

    void setSecret(int s)
    {
        secret = s;
    }

    void getSecret()
    {
        cout << "Secret: " << secret << endl;
    }
};

int main()
{

    User user1;
    user1.name = "Ahmed";
    user1.displayName();
    user1.getSecret();

    cout << "------------------" << endl;

    User user2;
    user2.name = "Khalid";
    user2.displayName();
    user2.getSecret();

    // user2.secret = 50; // This will cause a compilation error because 'secret' is private
    return 0;
}