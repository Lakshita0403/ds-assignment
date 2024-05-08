// quick sort

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] >= pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition_Index = partition(arr, low, high);
        quick_sort(arr, low, partition_Index - 1);
        quick_sort(arr, partition_Index + 1, high);
    }
}

int main()
{
    int arr[] = {2, 6, 4, 1, 9, 7};
    quick_sort(arr, 0,6 );

    for(int i = 0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}