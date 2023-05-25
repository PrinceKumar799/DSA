#include <iostream>
#include <thread>
using namespace std;
using namespace std::chrono;

// function pointer
void f1()
{
    for (int i = 0; i < INT32_MAX; i++)
    {
    }
}

// function object: Functor
class Functor
{
public:
    void operator()(int value)
    {
        cout << "Value from functor: " << value << endl;
    }
};

class Base
{
public:
    // non static member function
    void f4(int value)
    {
        cout << "Value from f4: " << value;
    }
    // static member function
    void static f5(int value)
    {
        cout << "Value from f5: " << value << endl;
    }
};

int main()
{

    // lambda function
    auto f2 = []()
    {
        cout << "Hello from f2" << endl;
    };

    auto start = high_resolution_clock::now();

    thread t1(f1);
    // thread t2(f2);
    // thread t3(Functor(), 30);
    // Base b;
    // thread t4(&Base::f4, &b, 40);
    // thread t5(&Base::f5, 50);

    cout << t1.joinable();
    t1.join();
    cout << t1.joinable();
    // t2.join();
    // t3.join();
    // t4.join();
    // t5.join();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken: " << duration.count() << endl;

    return 0;
}
