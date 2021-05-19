int longestLength(int arr[],int n)
{
   //Your code here
   int max_l = 0;
   for(int i = 0; i<n; i++)
   {
       int l =0, j;
      for( j = i; j <n; j++)
      {
          if(arr[i] == arr[j])
          {
              l++;
          }
          if(arr[i] != arr[j])
          {
              break;
          }
      }
      if(l > max_l)
      {
          max_l = l;
      }
      i = j-1;
   }
   return max_l;
}