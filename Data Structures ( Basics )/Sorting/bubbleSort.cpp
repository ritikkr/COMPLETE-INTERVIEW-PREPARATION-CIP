#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for(int i =0; i<n-1; i++)
    {
        for(int j = 0 ; j<n-i-1; j++)
        {
            if(arr[i] > arr[j] )
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}
int main()
{
    int arr[] = {10, 6, 2, 9, 1};
    int n = 5;
    bubbleSort(arr, n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}