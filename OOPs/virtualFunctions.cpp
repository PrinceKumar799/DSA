#include <iostream>
using namespace std;
// virtual keyword prevents early binding
// binding happens by seeing className or datatype of variable
// In case of Animal pointing to Dog object compiler would have direclty binded
// function speak of Animal class but we should get speak of dog class
// virtual keyword does not allow compiler to bind function early rather wait for
// runtime so we could know what class object is pointed
class Animal
{
public:
    virtual void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    Dog d;
    Animal *animalObj = &d;
    // If virtual keyword is not used then compiler would have called speak of base class
    animalObj->speak();
}