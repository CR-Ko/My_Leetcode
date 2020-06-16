#include <iostream>
#include <vector>
using namespace std;

class MaxOfSubarrayOfSizeK {
	public:
		static vector<double> findMaxSum(int K, const vector<int>& arr){
			vector<double> result(arr.size() - K + 1);
			for(int i = 0; i <= arr.size()-K ;i++){ // "=" is root cause
				// Find sum of next "K" elements
				double sum = 0;
				for(int j = i; j < i+K; j++ ){ // Here is core!
					sum += arr[j];
				}
				result[i] = sum;
			}
			return result;
		}
};


int Max_Sum(int a[], int n, int k)
{
    // n is greater
    if (k > n){
	    cout<<"Invalid!"<<endl;
    	    return -1;
    }

    int res = 0;
    for(int i=0;i<n-k+1;i++){
	int cur_res = 0;
	for(int j=i;j<i+k;j++){ // Here is core!
		//cout<<res<<endl;
		cur_res += a[j];
	}
        if(cur_res > res){
		res = cur_res;
	}	
    }
    return res;
}

// Driver code
/*
int main(int argc, char* argv[])
{
	vector<double> result = MaxOfSubarrayOfSizeK::findMaxSum(5, vector<int>{1, 3, 2, 6,-1,4,1,8,2});
cout << " Max of subarray of size K: ";
for(double d : result){
	cout << d << " ";
}
cout << endl;
}
*/

///*
int main()
{
	int a[] = {1, 2, 3, 4, 6};
	int k = 3;
	int n = sizeof(a)/sizeof(a[0]);
	cout<< Max_Sum(a, n, k)<< endl;
	return 0;
}
//*/
