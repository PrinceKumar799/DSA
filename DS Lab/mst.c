//Prince Kumar
/*
Problem Statement 1: Write a menu-driven program that implement following operations (using separate functions) 
on a linear array
1.   To find the location of a given element.
2.   To display the elements of the linear array.
*/
#include <stdio.h>
//search and find location of elements in LA
void Search(int arr[], int n)
{
    int target, loc, flag = 0;
    printf("Enter number to search in Linear array: ");
    //Reading element to search in Array
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            loc = i; //getting index of found element
        }
    }
    if (flag == 0)
    {
        printf("%d is not present in the Linear array", target);
    }
    else
    {
        printf("%d is present at %d index of Linear array\n", target, loc);
    }
}

//Display elements of Linear Array
void Display(int arr[], int n)
{
    printf("Linear Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d\t", arr[i]);
    }
}

//main program
int main()
{
    int n, choice;
    printf("Enter the size of Desired Linear array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Array Elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (choice != 3)
    {
        printf("\n1.Search\n2. Display\n3.Exit\nEnter your choice: "); //menu
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Search(arr, n); //call search function
            break;
        case 2:
            Display(arr, n); //call display function
            break;
        case 3:
            continue; //start new iteration
        default:
            break;
        }
    }
}