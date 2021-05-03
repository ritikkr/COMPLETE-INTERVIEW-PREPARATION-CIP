void eraseAt(vector<int> &v, int pos)
{
    // your code here
    vector<int> :: iterator it = v.begin() + pos;
    v.erase(it);
    
}

void eraseInRange(vector<int> &v, int start, int end)
{
    vector<int> :: iterator it1 = v.begin() + start;
    vector<int> :: iterator it2 = v.begin() + end;
    
    v.erase(it1, it2);
}

void clearAll(vector<int> &v)
{
    v.clear();
    
}