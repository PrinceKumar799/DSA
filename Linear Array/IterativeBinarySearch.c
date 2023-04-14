#include <stdio.h>
int BinarySearch(int list[], int n, int key)
{
    int l = 0, h = n - 1;

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == list[mid])
            return mid;
        if (key < list[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    int list[10], key, result;
    for (int i = 0; i < 10; i++)
        list[i] = 2 * (i + 1);
    printf("\nList: ");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", list[i]);
    }
    printf("\nEnter Number to Search: ");
    scanf("%d", &key);
    result = BinarySearch(list, 10, key);
    if (result != -1)
        printf("%d found on %d index of List", key, result);
    else
        printf("Element not present in List");
}