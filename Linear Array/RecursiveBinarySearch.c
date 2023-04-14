#include <stdio.h>
int List[10];
int BinarySearch(int l, int h, int key)
{
    if (l == h)
    {
        if (List[l] == key)
        {
            return l;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        int mid = (l + h) / 2;
        if (List[mid] == key)
        {
            return mid;
        }
        if (key > List[mid])
        {
            return BinarySearch(mid + 1, h, key);
        }
        else
        {
            return BinarySearch(l, mid - 1, key);
        }
    }
}
int main()
{
    int key, result;
    for (int i = 0; i < 10; i++)
        List[i] = 2 * (i + 1);
    printf("\nList: ");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", List[i]);
    }
    printf("\nEnter Number to Search: ");
    scanf("%d", &key);
    result = BinarySearch(0, 9, key);
    if (result != -1)
        printf("%d found on %d index of List", key, result);
    else
        printf("Element not present in List");
}