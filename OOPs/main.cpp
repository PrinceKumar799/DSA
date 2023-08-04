#include <iostream>
#include "Hero.cpp"
using namespace std;
int main()
{
    Hero ramesh(10, 'A');
    ramesh.print();
    ramesh.setHealth(30);

    // using inbuilt copy constructor
    Hero suresh(ramesh);
    suresh.print();

    return 0;
}