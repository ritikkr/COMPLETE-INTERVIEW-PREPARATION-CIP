#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // vector<int> :: iterator i = v.begin();
    auto i = v.begin();
    cout << *i << " ";
    i++;
    cout << *i << " ";
    i = v.end();
    cout << *i << " ";
    i--;
    cout << *i << " ";
    


    return 0;
}