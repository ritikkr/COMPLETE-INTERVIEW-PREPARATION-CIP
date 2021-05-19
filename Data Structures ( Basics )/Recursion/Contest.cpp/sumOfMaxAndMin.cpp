int sumOfMaxandMin(int arr[],int n)
{
    int max = arr[0], min=arr[0];
    for(int i=1; i<n; i++)
    {
        int curr = arr[i];
        if(curr < min)
        {
            min = curr;
        }
        if(curr > max)
        {
            max = curr;
        }
    }
    return max+min;
}