#include <iostream>
using namespace std;

int MaxSum(int arr[], int n, int k)
{
	// n must be greater
	if( k > n)
	{
		cout << "Invalid"<<endl;
		return -1; // means fail
	}

	// Compute sum of first window of size k
	int res = 0;
	for(int i = 0; i < k; i++)
		res += arr[i];
	
	// Compute sums of remaining windows by removing 
	// first element from previous window and adding 
	// last element from current window. 
	int current_sum = res;
	for(int i=k; i<n; i++)
	{
	     	current_sum += arr[i] - arr[i-k];
		res = max(res, current_sum);
	}

        return res;	
}

// Driver mode
int main()
{
	int arr[] = {1,3,2,5,7};
	int k = 3;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << MaxSum(arr, n, k)<<endl;
	return 0;
}
