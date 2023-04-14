#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *START = NULL;
struct node *CreateNode()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    return temp;
}

void ReadData()
{
    struct node *temp, *t;
    int data;
    temp = CreateNode();
    printf("Enter data to save: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (START == NULL)
    {
        START = temp;
    }
    else
    {
        t = START;
        while (t != NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
}
void ShowData()
{
    struct node *t = START;
    while (t != NULL)
    {
        printf(" %d\t", t->data);
        t = t->next;
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("1.Read Data\n2.Show Data\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            ReadData();
        }
        else if (ch == 2)
        {
            ShowData();
        }
        else
            exit(0);
    }
}
