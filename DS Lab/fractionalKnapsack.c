//Prince Kumar
#include<stdio.h>
//utitily function to swap two float values
void swap(float *first, float *second)
{
    float temp = *first;
    *first = *second;
    *second = temp;
}

//utitllity function to swap two integer values
void swapInt(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

//function used in partition in quicksort
int partition(float arr[],int w[],int p[], int low, int high)
{
    float pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            swapInt(&w[i],&w[j]);
            swapInt(&p[i],&p[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    swapInt(&w[i+1],&w[high]);
    swapInt(&p[i]+1,&p[high]);
    return (i + 1);
}

//recursive quicksort
void quickSort(float arr[],int w[],int p[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr,w,p, low, high);
        quickSort(arr,w,p,low, pi - 1);
        quickSort(arr,w,p, pi + 1, high);
    }
}


float GreedyFractionalKnapsack(int w[],int p[],int n,int W)
{
    float ratio[n]; //ratio array to contain profit by weight 
    float x[n]; //contains the fraction of element added in the bag
    printf("\nProfit by weight ratio: ");
    for (int i = 0; i < n; i++)
    {
        ratio[i] =   (p[i]*1.0)/w[i]; //calculating profit by weight fraction
        x[i] = 0;
        
        printf("%f\t",ratio[i]);
    }
    //sorting ratio, weight and profit in ascending order
    quickSort(ratio,w,p,0,n-1);

    //changing ascending order into descending 
    for (int i = 0,j=n-1; i < n/2; i++,j--)
    {
        swap(&ratio[i],&ratio[j]);
    }
    for (int i = 0,j=n-1; i < n/2; i++,j--)
    {
        swapInt(&w[i],&w[j]);
    }
    for (int i = 0,j=n-1; i < n/2; i++,j--)
    {
        swapInt(&p[i],&p[j]);
    }

    //checking whether lists are sorted
    printf("\n\nSorted profit by weight ratio: ");
    for (int i = 0; i < n; i++)
    {
        printf("%f\t",ratio[i]);
    }

    /*for (int i = 0; i < n; i++)
    {
        printf("\n%d\t",w[i]); //weight values
    }*/

    int weight = 0;
    for (int i = 0; i < n; i++)
        {
            if (weight + w[i] <= W) //place left in the sack to store an entire element
            {
                x[i] = 1; //adding the whole element in the sack
                weight += w[i]; //adding the weight of currently added element
            }
            else //not enought space left to hold whole element
            {
                x[i] = (W - weight)*1.0/w[i]; //adding the fraction of the element
                weight = W; //At last weight of the sack equals with threshold
                break;
            }
            
        }
        
    float total=0;
    //calculating total profit
    for (int i = 0; i< n; i++)
    {
        if (x[i] >0)
        {
    total += x[i]*p[i];
        }
        else{
            break;
        }
    }
    
    return total;
}


int main()
{
    int n;
    int W;
    printf("Enter the number of elements available: ");
    scanf("%d",&n);
    printf("Enter the maximum capacity: ");
    scanf("%d",&W);
    int p[n];
    int w[n];
    printf("\nEnter weight of %d elements: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&w[i]);
    }
    printf("\nEnter profit of %d elements: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    float t = GreedyFractionalKnapsack(w,p,n,W);
    printf("\n\n\tTotal Profit: %f\n",t);
    return 0;
}