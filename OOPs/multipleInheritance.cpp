#include <iostream>
using namespace std;

class Student
{
public:
    void study()
    {
        cout << "studying" << endl;
    }
};
class Professor
{
public:
    void teach()
    {
        cout << "Teaching" << endl;
    }
};

class University : private Student, private Professor
{
public:
    void acitivity()
    {
        study();
        teach();
    }
};

int main()
{
    University uni;
    uni.acitivity();
    return 0;
}