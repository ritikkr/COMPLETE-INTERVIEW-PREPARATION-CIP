#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        //type a contain xa mililitres of coco water
        //type b contains only xb gram of coco pulp
        // chef advised to consume Xa mililitres of coco water and Xb gram of water every week
        // output: total no of coconut(type a + type b) that chef should buy each week

        int xa, xb, Xa, Xb;
        cin>>xa>>xb>>Xa>>Xb;
        int totA = ceil(Xa/xa);
        int totB = ceil(Xb/xb);
        cout<<totA+totB<<endl;

    }

    return 0;
}