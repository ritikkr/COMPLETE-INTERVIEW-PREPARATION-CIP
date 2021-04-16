#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 4, 1, 5};
    sort(arr, arr+4);
    for(auto &i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    if (binary_search(arr, arr+4, 6) == true)
    {
        cout << "element found";
    }
    else
    {
        cout << "Element not found ";
    }
    return 0;
}