/*Prince Kumar
30th November, 2021*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;

void createList(int n)
{
    int i, data;
    struct node *prevNode, *newNode;

    if (n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevNode = head;

        for (i = 2; i <= n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;
            prevNode->next = newNode;
            prevNode = newNode;
        }

        prevNode->next = head;

        printf("\nCIRCULAR LINKED LIST CREATED SUCCESSFULLY\n\n");
    }
}

void displayList()
{
    struct node *current;
    int n = 1;

    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        current = head;
        printf("DATA IN THE LIST:\n");

        do
        {
            printf("Data %d = %d\n", n, current->data);

            current = current->next;
            n++;
        } while (current != head);
    }
}

void insertAtMid(int data, int mid)
{
    struct node *newNode, *current;
    int position = mid, i;
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {

        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;

        current = head;
        for (i = 2; i <= position - 1; i++)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;

        printf("NODE INSERTED SUCCESSFULLY.\n\n");
    }
}
int main()
{
    int n, data, choice = 1;
    head = NULL; 
    
    //creating a circular linked list
    printf("Enter the total number of nodes in list: ");
    scanf("%d", &n);
    createList(n); 
    
    //pushing data at the middle
    printf("Enter data for middle: ");
    scanf("%d", &data);
    insertAtMid(data, (n/2)+1);
    
    //showing the final list
    displayList();
    printf("\n\n\n\n\n");

    return 0;
}

