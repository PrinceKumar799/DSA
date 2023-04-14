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
void InsertAtLast()
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

void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = createNode();

    // Enter the position and data
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);

    // Change nexts
    temp = START;
    newnode->data = data;
    newnode->next = NULL;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
}
void deleteFirst()
{
    struct node *temp;
    if (START == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = START;
        START = START->next;
        free(temp);
    }
}
/*Function to delete first node*/
void DeleteAtEnd()
{
    struct node *reset;
    if (START == NULL)
        printf("\nEmpty List");
    else
    {
        reset = START->next;
        free(START);
        START = reset;
        // free(reset); //not able to use free fun
    }
}

void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
    // If LL is empty
    if (START == NULL)
        printf("\nList is empty\n");
    // Otherwise
    else
    {
        printf("\nEnter index : ");
        // Position to be deleted
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = START;
        // Traverse till position
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        position = temp->next;
        temp->next = position->next;
        free(position);
    }
}

void reverseLL()
{
    struct node *t1, *t2, *temp;
    t1 = t2 = NULL;
    // If LL is empty
    if (START == NULL)
        printf("List is empty\n");
    // Else
    else
    {
        // Traverse the LL
        while (START != NULL)
        {
            // reversing of points
            t2 = START->next;
            START->next = t1;
            t1 = START;
            START = t2;
        }
        START = t1;
        // New head Node
        temp = START;
        printf("Reversed nextedlist is : ");
        // Print the LL
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void Maximum()
{
    struct node *temp = START;
    int max = temp->data;
    while (temp != NULL)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    printf("\nMaximum Number: %d", max);
}

void Mean()
{
    if (START == NULL)
    {
        printf("List is empty");
    }
    else
    {
        int sum = 0, count = 0;
        struct node *temp = START;
        while (temp != NULL)
        {
            sum = sum + temp->data;
            temp = temp->next;
            count++;
        }
        printf("\nMean: %f", (sum * 1.0) / count);
    }
}

void sort()
{
    struct node *current = START;
    struct node *index = NULL;
    int temp;
    if (START == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            index = current->next;
            while (index != NULL)
            {
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            // Update the current
            current = current->next;
        }
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
        // printf("%d", test->data);
    }
}
int main()
{
    int choice = 0;
    while (choice != 10)
    {
        printf("\n\t\t1.Insert at last\n\t\t2.Insert at Front\n\t\t3.Insert at a position\n");
        printf("\t\t4.Display List\n\t\t5.Reverse\n\t\t6.Delete at last\n\t\t7.Delete at first");
        printf("\n\t\t8.Delete at position\n\t\t9.Find Maximum\n\t\t10.Mean\n\t\t11.Sort\nyour choice?");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            InsertAtLast();
            break;
        case 2:
            InsertAtFront();
            break;
        case 3:
            insertAtPosition();
            break;
        case 4:
            Display();
            break;
        case 5:
            reverseLL();
            break;
        case 6:
            DeleteAtEnd();
            break;
        case 7:
            deleteFirst();
            break;
        case 8:
            deletePosition();
            break;
        case 9:
            Maximum();
            break;
        case 10:
            Mean();
            break;
        case 11:
            sort();
            break;
        case 12:
            exit(1);
        default:
            break;
        }
    }
    return 0;
}