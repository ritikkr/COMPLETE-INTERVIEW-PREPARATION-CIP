//Complete this function. it1 points to vector.begin(), it2 points to vector.end()
void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    //Your code here. Use iterator to print all the elements
    while(it1 != it2)
    {
        cout<<*it1<<" ";
        *it1++;
    }
    cout<<endl;
}
