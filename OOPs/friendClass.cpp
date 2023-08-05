#include <iostream>

using namespace std;

class A
{
private:
    int salary;

public:
    A(int salary)
    {
        this->salary = salary;
    }
    friend class B;
};

class B
{
public:
    void printSalaryOfA(A &a)
    {
        cout << a.salary << endl;
    }
};
int main()
{
    A a(200000);
    B *b = new B();
    b->printSalaryOfA(a);
}