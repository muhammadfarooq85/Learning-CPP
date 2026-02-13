#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
    vector<int> nums;
    vector<string> heros{"hello", "superman"};

    for (int i = 0; i < 5; i++)
    {
        nums.push_back(i);
        cout << nums[i] << endl;
    };

    cout << nums.capacity() << endl;
    cout << nums.size() << endl;

    return 0;
}