
/*Prince Kumar
9/6/2021 */

#include <iostream>
#define MAX 10
using namespace std;
int top = -1;
int stack[MAX];

//push function
void push()
{
    int push_num;
    if (top >= MAX)
    {
        cout << "stack Overflow\n";
    }
    else
    {
        cout << "Enter a number to push: ";
        cin >> push_num;
        top++;
        stack[top] = push_num;
    }
}

//pop function
void pop()
{
    if (top < 0)
    {
        cout << "stack underflow\n";
    }
    else
    {
        cout << "\n"
             << stack[top] << " poped from the stack\n";
        top--;
    }
}

//Display stack
void display()
{
    if (top < 0)
    {
        cout << "Empty Stack\n";
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << "\t";
        }
        cout << "\n";
    }
}

int main()
{
    int choice = 0;
    while (choice != 4)
    {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
            break;
        }
    }
}