#include <iostream>
#include "Hero.cpp"

using namespace std;
int main()
{
    Hero *h1 = new Hero();
    h1->setHealth(50);
    h1->setLevel('G');
    h1->print();
}