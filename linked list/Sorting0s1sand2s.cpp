#include<stdio.h>
#include<stdlib.h>
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
void InsertAtFront()
{
    struct node *temp;
    temp = createNode();
    temp->next = START;
    START = temp;
    printf("enter a number: ");
    scanf("%d", &START->data);
}

/*Function to insert a node at tail*/
void InsertNode()
{
    struct node *temp, *t;
    temp = createNode();
    printf("enter a number: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (START == NULL)
        START = temp;
    else
    {
        t = START;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
}
node* sort(node* head)
{
    struct node* temp = head;
    int zeroCount=0,oneCount=0,twoCount=0;
    while (temp != NULL)
    {
        if(temp->data == 0)
            zeroCount++;
        else if(temp->data == 1)
            oneCount++;
        else if(temp->data == 2)
            twoCount++;
        
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL)
    {
        if(zeroCount != 0)
        {
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount != 0)
        {
            temp->data=1;
            oneCount--;
        }
        else if(twoCount != 0)
        {
            temp->data=2;
            zeroCount--;
        }

        temp=temp->next;
    }
    return head;
}

int main()
{
    int t=4;
    while (t--)
    {
        InsertNode();
    }
    node* temp = sort(START);
    while(temp != NULL)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    

}