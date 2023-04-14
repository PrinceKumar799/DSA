#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList
{
    public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    LinkedList(LinkedList &l1)
    {
        head = NULL;
        Node *temp = l1.head;
        while (temp!=NULL)
        {
            this->creatNode(temp->data);
            temp=temp->next;
        }
        
    }
    void creatNode(int data)
    {
        Node* temp = head;
        if(head==NULL)
        {
            head = new Node(data);
        }
        else
        {
            while (temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = new Node(data);
            
        }
    }

    void printLinkedList()
    {
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void compare(LinkedList& compareFrom)
    {
        Node* temp2 = compareFrom.head;
        Node* temp1 = head;
        int sizecompareFrom=0,sizeCompareTo=0;
        while (temp1)
        {
            sizeCompareTo++;
            temp1 = temp1->next;
        }
        while (temp2)
        {
            sizecompareFrom++;
            temp2 = temp2->next;
        }
        if(sizecompareFrom>sizeCompareTo)
        {
            cout<<"L1(copy from) is bigger"<<endl;
        }
        else if(sizecompareFrom<sizeCompareTo)
        {
            cout<<"L2(CompareTo) is bigger"<<endl;
        }
        else{
            cout<<"Both are in equal size"<<endl;
        }
    }
    LinkedList operator+ (const LinkedList& l2){
    LinkedList l3;
    Node* temp1 = head;
    while(temp1!=NULL)
    {
        l3.creatNode(temp1->data);
        temp1 = temp1->next;
    }
    Node* temp2 = l2.head;
    while (temp2!=NULL)
    {
        l3.creatNode(temp2->data);
        temp2 =temp2->next;
    }    
    return l3;
  }
//   LinkedList add(LinkedList,LinkedList);
};
// LinkedList class::LinkedList add(LinkedList l1, LinkedList l2)
// {
//     LinkedList l3;
//     Node* temp1 = l1.head;
//     while(temp1!=NULL)
//     {
//         l3.creatNode(temp1->data);
//         temp1 = temp1->next;
//     }
//     Node* temp2 = l2.head;
//     while (temp2!=NULL)
//     {
//         l3.creatNode(temp2->data);
//         temp2 =temp2->next;
//     }    
//     return l3;
// }
int main()
{
    LinkedList l1;
    l1.creatNode(1);
    l1.creatNode(2);
    l1.creatNode(3);
    LinkedList l2(l1);
    l2.creatNode(3);
    l1.printLinkedList();
    l2.printLinkedList();
    l2.compare(l1);
    LinkedList l3;
    l3 = l1 + l2;
    cout<<"L3: ";
    l3.printLinkedList();
    // LinkedList l4;
    // l4 = add(l1,l3);
    // cout<<"L4: ";
    // l4.printLinkedList();
}
