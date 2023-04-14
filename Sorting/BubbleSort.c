#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = 0;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int arr[] = {5, 6, 9, 2, 4};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\n%d\n", n);
    BubbleSort(arr, n);
    return 0;
}