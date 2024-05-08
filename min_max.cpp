#include<iostream>
using namespace std;

int mini(int arr[], int n)
{
    int minim = INT8_MAX;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]<minim)
        {
            minim = arr[i];
        }
    }
    return minim;

}

int maxi(int arr[], int n)
{

int maxim = INT8_MIN;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]>maxim)
        {
            maxim = arr[i];
        }
    }
    return maxim;
}


int main(){
    int arr[] = {9,6,1,5,8,4};
    int n = 6;
    cout<<"Minimum element is : "<<mini(arr, n)<<endl;
    cout<<"Maximum element is : "<<maxi(arr, n)<<endl;
    return 0;
}