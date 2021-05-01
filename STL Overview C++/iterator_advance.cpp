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
    return 0;
}

// advance moves i to n pos ahead
// next returns the iterator to n position ahead whereas advance itself moves to that position.