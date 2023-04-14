#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[100], ch, Newch;
void Search()
{
    printf("\n Please Enter the Character that you want to Search for : ");
    fflush(stdin);
    scanf("%c", &ch);
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            printf("%c is present in %s\n", ch, str);
        }
    }
}

void Replace()
{
    Search();
    printf("\n Please Enter the New Character : ");
    fflush(stdin);
    scanf("%c", &Newch);
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            str[i] = Newch;
        }
    }
    printf("\n Final String after Replacing All Occurrences of '%c' with '%c' = %s ", ch, Newch, str);
}
int main()
{
    int choice = 0;
    printf("\n Please Enter any String : ");
    gets(str);
    while (choice != 3)
    {
        printf("\n1. Search\n2. Replace\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Search();
            break;

        case 2:
            Replace();
            break;
        case 3:
            exit(1);
            break;
        default:
            break;
        }
    }
    return 0;
}