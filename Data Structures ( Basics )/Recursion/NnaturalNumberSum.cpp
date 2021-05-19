#include <iostream>
using namespace std;
int naturalSum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + naturalSum(n-1);
}
int main()
{
    
    cout<<naturalSum(5);
    return 0;
}