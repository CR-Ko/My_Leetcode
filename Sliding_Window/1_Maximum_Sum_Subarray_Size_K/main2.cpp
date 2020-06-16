#include <iostream>
#include <vector>
using namespace std;

class MaxSumOfSubArrayOfSizeK{
	public:
		static int findMaxSum(int k, const vector<int>& arr){ // const
			int result = 0, cur = 0;
			for(int i = 0; i < arr.size() - k;i++ ){ // here
				int sum = 0;
				for(int j = i; j < i+k;j++){  // here
					sum += arr[j];
				}	
				cur = sum;	
				if(result < cur){            // here
					result = cur;
				}	
			}
	 		return result;
		}
};

// Driver code
int main(int argc, char* argv[]){
	int result = MaxSumOfSubArrayOfSizeK::findMaxSum(3, vector<int>{100,2,3,4,5});
	cout << " Result :" << result;
	cout << endl;
}
