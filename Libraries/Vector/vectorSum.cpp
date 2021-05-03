//Complete the function
int SumMe(vector<int> v, int n){

    int initial_sum = 0;
	 return accumulate(v.begin(), v.end(), initial_sum);
    
}