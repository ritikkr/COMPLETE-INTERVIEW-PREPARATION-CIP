int theSequence(int n)
{
    //Your code here
    if(n==0)
    {
        return 1;
    }
    return n+n*(theSequence(n-1));
}