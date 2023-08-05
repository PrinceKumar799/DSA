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
    // friend class: private members a accessible throught the friend class
    friend class B;
    // global friend function
    friend void acessPrivateMembersOfA(A &a);
};

// global friend function
void acessPrivateMembersOfA(A &a)
{
    cout << a.salary << endl;
}
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
    acessPrivateMembersOfA(a);
}
