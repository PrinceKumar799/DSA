#include <iostream>

using namespace std;
class Human
{
public:
    int height;
    int weight;
};

// public access modifier in inheritance keeps public members public and protected memebers as protected
class MalePublic : public Human
{
public:
    string color;
    MalePublic(int height, int weight, string color)
    {
        this->height = height;
        this->weight = weight;
        this->color = color;
    }
    string getColor()
    {
        return this->color;
    }
};

// protected access modifier in inheritance keeps both public members and protected memebers as protected
class MaleProtected : protected Human
{
public:
    string color;
    MaleProtected(int height, int weight, string color)
    {
        this->height = height;
        this->weight = weight;
        this->color = color;
    }
    string getColor()
    {
        return this->color;
    }
};

int main()
{
    // All members are public
    MalePublic mPub(12, 45, "Brown");
    cout << mPub.height << endl;
    cout << mPub.weight << endl;
    cout << mPub.color << endl;

    MaleProtected mProc(34, 89, "White");
    // height weight cannot be accessed directly since they are protected
    //  cout << mProc.height << endl;
    //  cout << mProc.weight << endl;
    cout << mProc.color << endl;
}