// Average of string


int avgOfString(string s)
{
    //Your code here
    int sum = 0, n = s.length();
    for(int i = 0; i<n; i++)
    {
        sum += int(s[i]);
    }
    return floor(sum/n);   
}