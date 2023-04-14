#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *START = NULL;
void push()
{
    struct node *TEMP = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to push: ");
    scanf("%d", &TEMP->data);
    if (START != NULL)
    {
        TEMP->next = START;
        START = TEMP;
    }
    else
    {
        TEMP->next = NULL;
        START = TEMP;
    }
}
void pop()
{
    if (START != NULL)
    {
        printf("%d poped from the stack\n", START->data);
        START = START->next;
    }
    else
    {
        printf("Stack Empty\n");
    }
}
void display()
{
    struct node *temp = START;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int ch = 0;
    do
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            push();
        }
        else if (ch == 2)
        {
            pop();
        }
        else if (ch == 3)
        {
            display();
        }

    } while (ch != 4);
}
