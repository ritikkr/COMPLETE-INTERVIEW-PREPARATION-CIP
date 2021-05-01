#include <iostream>
using namespace std;

template<typename T, int limit>
T arrMax(T arr[], int n)
{
    if ( n > limit)
    {
        cout<<"Limit excedded"<<endl;
        return 0;
    }
    T res = arr[0];
    for(int i = 0; i<n; i++)
        if(arr[i] > res)
            res = arr[i];
    return res;
}
int main()
{
    int arr[]  = {10, 40, 3};
    cout<<arrMax<int, 100>(arr, 3) << endl;
    int x = 100;
    // cout<<arrMax<int, x>(arr, 3) << endl;   // this will throws an error because limit should be const only.    
    const int x = 100;
    // cout<<arrMax<int, x>(arr, 3) << endl;   // this will throws an error because limit should be const only.
    float arr2[] = {10.5, 3.5, 1.5, 30.5};
    cout<<arrMax<float, 50>(arr2, 4) << endl;

    return 0;
}