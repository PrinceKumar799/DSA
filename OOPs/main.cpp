#include <iostream>
#include "Hero.cpp"
using namespace std;
int main()
{

    // Static data memebers and functions
    // 1. Static members belongs to class
    // 2. Static functions can only access static variables
    cout << Hero::getTimeToComplete() << endl;

    // Hero ramesh(0, 'A');
    // ramesh.print();

    // // using inbuilt copy constructor
    // // inbuilt copy constructor makes shallow copy
    // // user definde copy constructor makes deep copy
    // Hero suresh(ramesh);
    // ramesh.health = 1000;
    // ramesh.print();
    // suresh.print();

    return 0;
}