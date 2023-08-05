// function overriding
#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Animal *dog = new Dog();
    dog->speak();
    Dog dogObj;
    dogObj.speak();
    return 0;
}
