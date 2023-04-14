#include<iostream>
#include<vector>
using namespace std;
class Queue
{
private:
    vector <int> arr;
    int starting=0;
public:
    bool enQueue(int n)
    {
        arr.push_back(n);
        return true;
    }
    bool deQueue()
    {
        if (isEmpty())
        {
            return false;
        }
        starting++;
        return true;
    }
    bool isEmpty(){
        if (starting == arr.size())
        {
            return true;
        }
        return false;
    }

    int Front()
    {
        return arr[starting];
    }
};

int main()
{
    Queue q;
    q.enQueue(5);
    q.enQueue(3);
    if (!q.isEmpty()) {
        cout << q.Front() << endl;
    }
    q.deQueue();
    if (!q.isEmpty()) {
        cout << q.Front() << endl;
    }
    q.deQueue();
    if (!q.isEmpty()) {
        cout << q.Front() << endl;
    }
}