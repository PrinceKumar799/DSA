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

/*Inserting node at the front*/
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

/*Function to delete first node*/
void DeleteNode()
{
    struct node *reset;
    if (START == NULL)
        printf("\nEmpty List");
    else
    {
        reset = START->next;
        free(START);
        START = reset;
        //free(reset); //not able to use free fun
    }
}

/*Traversing and displaying the list*/
void Display()
{
    struct node *test;
    if (START == NULL)
    {
        printf("Empty List.");
    }
    else
    {
        test = START;
        while (test != NULL)
        {
            printf("%d ", test->data);
            test = test->next;
        }
        //printf("%d", test->data);
    }
}
int main()
{
    int choice = 0;
    while (choice != 4)
    {
        printf("\n1.Create Node\n2.Delete Node\n3.Display List\n4.Exit\n5.Insert Node at Front\nyour choice? ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            InsertNode();
            break;
        case 2:
            DeleteNode();
            break;
        case 3:
            Display();
            break;
        case 5:
            InsertAtFront();
            break;
        default:
            break;
        }
    }
    return 0;
}