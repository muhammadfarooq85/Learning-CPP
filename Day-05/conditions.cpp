// Conditions or Decisions:

#include <iostream>
using namespace std;

int main()
{
    int rating = 3;
    if (rating == 5)
    {
        cout << "Excellent!" << endl;
    }
    else if (rating == 4)
    {
        cout << "Very Good!" << endl;
    }
    else if (rating == 3)
    {
        cout << "Good!" << endl;
    }
    else if (rating == 2)
    {
        cout << "Fair!" << endl;
    }
    else if (rating == 1)
    {
        cout << "Poor!" << endl;
    }
    else
    {
        cout << "Invalid rating!" << endl;
    }

    // Ternoary Operator
    int score = 85;
    string result = (score >= 60) ? "Pass" : "Fail";
    cout << "Result: " << result << endl;
    return 0;
}