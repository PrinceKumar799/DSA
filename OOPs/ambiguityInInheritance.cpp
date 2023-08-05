// Happens in multiple inheritance when two or more superclasses have same data members or functions

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Student
{
public:
    void study()
    {
        cout << "studying" << endl;
    }
    void markAttendance()
    {
        cout << "Student Attendence Marked" << endl;
    }
};
class Professor
{
public:
    void teach()
    {
        cout << "Teaching" << endl;
    }
    void markAttendance()
    {
        cout << "Professor Attendence Marked" << endl;
    }
};

class University : public Student, public Professor
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
    uni.Student::markAttendance();
    uni.Professor::markAttendance();
    return 0;
}