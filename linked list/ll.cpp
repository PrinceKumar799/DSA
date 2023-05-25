#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList
{
    Node *head = NULL;

public:
    void insertNode(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new Node(data);
        }
    }
    void showData()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList firstLinkedList;
    firstLinkedList.insertNode(1);
    firstLinkedList.insertNode(2);
    firstLinkedList.insertNode(3);
    firstLinkedList.insertNode(4);
    firstLinkedList.insertNode(5);
    firstLinkedList.insertNode(6);
    firstLinkedList.showData();
}