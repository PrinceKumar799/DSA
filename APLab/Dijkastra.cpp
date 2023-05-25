#include <iostream>
using namespace std;

class A
{
public:
    int a = 10;
} int operator+(int a, int b)
{
    return a - b;
}

int main()
{
    int ans = 5 + 6;
    cout << ans << endl;
}