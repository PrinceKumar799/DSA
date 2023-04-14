#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
    int flag;
    int unsorted = n;
    int temp;
    cout << "\nEntered Elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " \t ";
    }
    do
    {
        flag = 0;
        for (int i = 0; i < unsorted; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag = 1;
            }
        }
        unsorted -= 1;
    } while (flag == 1);
    cout << "\nSorted Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements to sort\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements to sort\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);
    return 0;
}
