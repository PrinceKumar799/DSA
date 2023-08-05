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
};

int main()
{
    Dog d;
    d.speak();
}