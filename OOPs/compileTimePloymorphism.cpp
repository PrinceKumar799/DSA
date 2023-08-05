#include <iostream>
using namespace std;

class Integer
{
    int a;

public:
    Integer()
    {
    }
    Integer(int a)
    {
        this->a = a;
    }
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    // operator overloading
    int operator+(Integer inputObj)
    {
        return this->a + inputObj.a;
    }
};

int main()
{
    Integer obj;
    cout << obj.add(1, 2) << endl;
    cout << obj.add(1, 2, 4) << endl;

    Integer x(12);
    Integer y(13);
    cout << x + y << endl;
}
