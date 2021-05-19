#include <iostream>
using namespace std;
int sumDigit(int n)
{
    if(n%10 == 0)
    {
        return 0;
    }
    return n%10 + sumDigit(n/10);
}
int main()
{
    cout<<sumDigit(253)<<endl;
    cout<<sumDigit(9987);
    return 0;
}