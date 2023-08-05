#include <iostream>
using namespace std;
// Abstract class: Any class having one pure virtual function
// we cannot creat object of abstract class
class Person
{
public:
    string name;
    int age;
    virtual void getBasicDetails() = 0; // pure virtual funtion without definition
};

class Student : private Person
{
    int rollNumber;

public:
    Student(int rollNumber, string name, int age)
    {
        this->age = age;
        this->name = name;
        this->rollNumber = rollNumber;
    }
    void getBasicDetails()
    {
        cout << name << endl;
        cout << age << endl;
        cout << rollNumber << endl;
    }
};

int main()
{
    Student ramesh(1, "Ramesh", 23);
    ramesh.getBasicDetails();
}
