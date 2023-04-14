#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *START = NULL;
struct node *createNode()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    return temp;
}
Node * Reverse(node *Head)
{
    Node* prev = NULL;
    Node *curr= Head;
    while (curr != NULL)
    {
        forward =curr->next;
        curr->next=prev;
        prev=curr;
        curr = forward;
    }
    Head = prev;
    return Head;
    
}