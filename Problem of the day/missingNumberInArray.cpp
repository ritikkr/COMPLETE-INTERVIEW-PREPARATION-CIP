#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>&arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(arr[i+1] != arr[i] + 1)
        {
            return arr[i+1] - 1;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> array(n-1);
        for(int i = 0; i<n-1; i++) cin>> array[i];
        cout<< MissingNumber(array, n)<<"\n";    
    }
    return 0;
    
}
