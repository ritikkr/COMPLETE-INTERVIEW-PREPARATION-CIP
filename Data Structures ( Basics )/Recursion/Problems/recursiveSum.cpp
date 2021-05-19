int recursiveSum(int N)
    {
        //Your code here
        //Recursively sum from 1 to N and return
        if(N==0)
        {
            return 0;
        }
        return N + recursiveSum(N-1);
    }