#include <iostream>
#include <thread>

using namespace std;
using namespace std::chrono;

int var = 0;
int turn = 1;
bool flag[2] = {false, false};
void fun(int a)
{
    flag[a] = true;
    turn = !a;
    while (flag[!a] && turn == (!a))
        ;
    for (int i = 0; i < 100000; i++)
    {
        var++;
    }
    flag[a] = false;
}

int main()
{
    auto start = high_resolution_clock ::now();
    thread t1(fun, 0);
    thread t2(fun, 1);
    t1.join();
    t2.join();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time Taken: " << duration.count() << endl;
    cout << var << endl;
    return 0;
}