template <class T>
void sortArray(T arr[], int n)
{ 
	for(int i =0 ; i< n-1; i++)
	{
	    for(int j = 0 ; j < n-1-i; j++)
	    {
	        if (arr[j]> arr[j+1])
	        {
	            T temp = arr[j];
	            arr[j] = arr[j+1];
	            arr[j+1] = temp;
	        }
	    }
	}
}

template <class T>
void printArray(T a[], int n)
{
	for(int i = 0 ; i<n; i++)
	{
	    cout<<a[i]<<" ";
	}
	cout<<endl;
}
