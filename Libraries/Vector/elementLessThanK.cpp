
vector<int> list_less_than_k(vector<int> a,int n,int k)
{
    vector<int> v;
    for(auto i : a)
    {
         if(i < k)
         {
             v.push_back(i);
         }
    }
    return v;
}
