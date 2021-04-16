#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> :: iterator i = v.begin();
    i = next(i); // by default it moves 1 pos ahead;
    i++;
    cout << *i << " ";
    i = next(i, 2);
    cout << *i << " ";
    i = prev(i);
    cout << *i << " ";
    


    return 0;
}