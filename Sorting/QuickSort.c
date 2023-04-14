#include <stdio.h>
void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low-1 );
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void print(int arr[], int n)
{
}
int main()
{
    int arr[] = {15, 48, 27, 36, 44, 3, 55, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\n\nUnsorted Array: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", arr[i]);
    }
    quickSort(arr, 0, n - 1);
    printf("\n\nSorted Array:   ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", arr[i]);
    }
    // print(arr, n);
    return 0;
}