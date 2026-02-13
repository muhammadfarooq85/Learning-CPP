#include "iostream"
using namespace std;

class MyFloat
{
    float ft;

public:
    MyFloat()
    {
        ft = 0.1;
    };

    void getValue()
    {
        cout << ft << endl;
    }

    void operator()(float a)
    {
        ft += a;
    }
};

int main()
{
    MyFloat hello;
    hello.getValue(); // 0.1

    hello(12);
    hello.getValue();
    return 0;
}