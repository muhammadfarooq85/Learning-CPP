// AND & OR in C++: In C++, the logical AND operator is represented by '&&' and the logical OR operator is represented by '||'.

#include <iostream>
using namespace std;

int main()
{
    bool a = true;
    bool b = false;

    // Logical AND
    if (a && b)
    {
        cout << "Both a and b are true." << endl;
    }
    else
    {
        cout << "At least one of a or b is false." << endl;
    }

    // Logical OR
    if (a || b)
    {
        cout << "At least one of a or b is true." << endl;
    }
    else
    {
        cout << "Both a and b are false." << endl;
    }

    return 0;
}