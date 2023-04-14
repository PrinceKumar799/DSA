//WAP to enter marks of DAA lab out of 20 including (10 marks viva, worksheet 5 marks and conduct 5 marks) 
//calculate its percentage and sort the roll number using Quick Sort algorithm.

#include<stdio.h>
void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
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

int main()
{
    int num;
    printf("Enter no. of students: ");
    scanf("%d",&num);  
    float viva,worksheet,conduct,percentage;
    int roll_no[num];
    for (int i = 0; i < num; i++)
    {
        viva=0;
        worksheet=0;
        conduct=0;
        percentage=0;
        printf("\nEnter roll no. of student %d: ",i+1);
        scanf("%d",&roll_no[i]);
        printf("Enter Viva marks: ");
        scanf("%f",&viva);         
        printf("Enter worksheet marks: ");
        scanf("%f",&worksheet);
        printf("Enter conduct marks: ");
        scanf("%f",&conduct);
        percentage  = (viva  +  worksheet  +  conduct)*5 ;
        printf("percentage marks =  %0.2f  %%",percentage);    
    }
    printf("\n\nSorted Roll numbers \n");
    quickSort(roll_no,0,num-1);
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", roll_no[i]);
    }
}