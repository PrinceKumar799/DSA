#include <iostream>
using namespace std;

class A
{
public:
    void funcA()
    {
        cout << "A" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "B" << endl;
    }
};

class C : public B
{
public:
    void funcC()
    {
        cout << "C" << endl;
    }
};

int main()
{
    C c;
    c.funcA();
    c.funcB();
    c.funcC();
    return 0;
}