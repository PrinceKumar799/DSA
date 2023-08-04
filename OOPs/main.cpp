#include <iostream>
#include "Hero.cpp"
using namespace std;
int main()
{
    Hero ramesh(0, 'A');
    ramesh.print();

    // using inbuilt copy constructor
    // inbuilt copy constructor makes shallow copy
    // user definde copy constructor makes deep copy
    Hero suresh(ramesh);
    ramesh.health = 1000;
    ramesh.print();
    suresh.print();

    return 0;
}