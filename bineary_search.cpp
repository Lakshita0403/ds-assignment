#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
    
}

int main()
{
    int odd[5] = {4, 7, 9, 12, 16};
    int even[6] = {4, 7, 9, 12, 16, 24};

    int oddindex = binarysearch(odd, 5, 7);
    int evenindex = binarysearch(even, 6, 24);

    cout<< "The index of 7 is: " << oddindex << endl;
    cout<<"The index of 24 is: "<<evenindex<<endl;

    return 0;
}