#include "iostream"
using namespace std;

class Rectangle
{
    double _breadth;
    double _length;

public:
    Rectangle(double l = 2.0, double w = 2.0)
    {
        _breadth = w;
        _length = l;
    }

    int area()
    {
        return _breadth * _length;
    }

    int compare(Rectangle rectangle)
    {
        return this->area() > rectangle.area();
    }
};
int main()
{
    Rectangle h1(2.0, 3.0);
    Rectangle h2(3.0, 3.0);

    cout << h1.compare(h2) << endl;
    cout << h2.compare(h1) << endl;


    if (h1.compare(h2))
    {
        cout << "H2 is smaller." << endl;
    }
    else
    {
        cout << "H2 is bigger." << endl;
    }
    return 0;
}