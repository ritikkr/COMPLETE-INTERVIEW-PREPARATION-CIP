#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> :: iterator i = v.begin();
    advance(i, 3);
    cout<<(*i)<<endl;
    advance(i, -3);
    cout<<(*i)<<endl;
    
    for(i = v.begin(); i!= v.end(); i++)
    {
        cout<<i;
    }
    return 0;
}
