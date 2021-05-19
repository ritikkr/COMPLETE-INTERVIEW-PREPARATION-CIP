#include <iostream>
using namespace std;
bool isPalindrome(string str, int start, int end)
{
    if(start>= end)
    {
        return true;
    }
    return (str[start] == str[end] && isPalindrome(str, start+1, end-1));

}
int main()
{
    cout<<isPalindrome("acbca",0, 4);
    

    return 0;
}