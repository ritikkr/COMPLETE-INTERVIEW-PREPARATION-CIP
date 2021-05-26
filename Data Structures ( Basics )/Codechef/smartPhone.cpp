#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long int> budgetV;
    for(int i = 0; i<n; i++)
    {
        long long int price;
        cin>>price;
        budgetV.push_back(price);
    }
    sort(budgetV.begin(), budgetV.end());
    long long int maxBudget = 0, budget = 0;
    for(int i = 0; i<n; i++)
    {
        budget = (n-i)*budgetV[i];
        if(budget > maxBudget) { maxBudget = budget; }

    }
    cout<<maxBudget<<endl;
    return 0;
}