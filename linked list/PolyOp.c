#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int exp;
    float coeff;
    struct node *link;
} poly;
poly *head1 = NULL;
poly *head2 = NULL;
poly *CreateNode()
{
    poly *newnode = (poly *)malloc(sizeof(poly));
    newnode->link = NULL;
    return newnode;
}
void InputPoly(poly *head)
{
    int n;
    poly *temp = NULL, *ptr = head;
    printf("Enter the no of terms of Polynomial: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nFor %d term\n", i + 1);
        temp = CreateNode();
        printf("\nCoefficient: ");
        scanf("%f", &temp->coeff);
        printf("\nExponent: ");
        scanf("%d", &temp->exp);
        if (i == 0)
        {
            head = temp;
        }
        else
        {
            head = head->link;
            head = temp;
        }
    }
}
void AddPoly()
{
    
}
int main()
{
    InputPoly(head1);
}