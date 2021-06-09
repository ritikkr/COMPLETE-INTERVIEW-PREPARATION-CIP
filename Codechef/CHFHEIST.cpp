#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        // D - hijack the bank for D days
        // P - initial rate of prinitng the currency is p dollar per day
        // 
        int D, d, P, Q;
        cin>>D>>d>>P>>Q;
        int cd = 0; //current day
        int total = 0;
        int printing_rate = P;
        int c = 1; // times production changes
        for(int i= 0 ; i<D; i++)
        {
            if(cd == d)
            {
                printing_rate = P + (c*Q);
                cd = 0;
                c++;
            } 
            total += printing_rate;
            cout<<total<<"Dollar on day"<<i+1<<endl;

            cd++;
        }
        cout<<total<<endl;
    }

    return 0;
}