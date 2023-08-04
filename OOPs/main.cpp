#include <iostream>
#include "Hero.cpp"
using namespace std;
int main()
{
    Hero ramesh;
    cout << "size of" << sizeof(ramesh);
    ramesh.setHealth(13);
    cout << "Ramesh Health is: " << ramesh.getHealth();
    return 0;
}