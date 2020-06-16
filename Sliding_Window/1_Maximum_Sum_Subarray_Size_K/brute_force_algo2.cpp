#include <iostream>
#include <vector>
using namespace std;

class MaxOfSubarrayOfSizeK{
	public:
	static vector<double> findMaxSum(int K, const vector<int>& arr){
		vector<double> result(arr.size() - K + 1); 
		for(int i=0; i <= arr.size()-K; i++){
			double sum = 0;
			for(int j=i;j<i+K;j++){
				sum += arr[j];
			}
			result[i] = sum;
		}
		return result;
	}
 
};

// Driver code
int main(int argc, char* argv[])
{
	vector<double> result = MaxOfSubarrayOfSizeK::findMaxSum(2, vector<int>{1, 2, 3, 4, 5, 8});
	cout << " MaxOfSubarray is : ";
	for(double d : result)
	{
		 cout << d  << " ";
	}
	cout << endl;
	return 0;
}
