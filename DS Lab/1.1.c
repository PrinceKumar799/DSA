#include <stdlib.h>
#include <stdio.h>

int a[20];
int n, val, i, j, pos;

void create() //creating an array
{
    printf("\nEnter the size of the array elements:\t");
    scanf("%d", &n);
    printf("\nEnter the elements for the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
} //end of create()

void display() //displaying an array elements
{
    int i;
    printf("\nThe array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
} //end of display()

void insert() //inserting an element in to an array
{
    printf("\nEnter the position for the new element:\t");
    scanf("%d", &pos);
    printf("\nEnter the element to be inserted :\t");
    scanf("%d", &val);
    for (i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = val;
    n = n + 1;
} //end of insert()

void del() //deleting an array element
{
    printf("\nEnter the position of the element to be deleted:\t");
    scanf("%d", &pos);
    val = a[pos];
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    printf("\nThe deleted element is =%d", val);
} //end of delete()

void search()
{
    int num, flag = 0;
    printf("Enter the number to find the location: ");
    scanf("%d", &num);
    for (int i = 0; i < 20; i++)
    {
        if (num == a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d is present at %d in array", num, i);
    else
        printf("%d do not belong to array", num);
}

int main()
{
    int choice;
    do
    {
        printf("\n\n--Menu--\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Insert\n");
        printf("4.Delete\n");
        printf("5.Search\n");
        printf("6.Exit\n");
        printf("-----");
        printf("\nEnter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            del();
            break;
        case 5:
            search();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\nInvalid choice:\n");
            break;
        }
    } while (choice != 6);
    return 0;
}
