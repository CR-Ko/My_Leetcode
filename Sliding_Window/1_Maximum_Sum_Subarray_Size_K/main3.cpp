#include <iostream>
#include <vector>
using namespace std;


class MaxSumSubArraySizeK{
	public:
		static int findMax(int k, const vector<int>& arr){
			//vector<double> result(arr.size()-k+1);
			int cur = 0;
			for(int i = 0; i <= arr.size() - k ;i++){
				int sum = 0;
				for(int j = i ; j < i+k ;j++){
					sum += arr[j];
				}
			 	
				if(sum>cur){
					cur = sum;
				}
			}
			return cur;
		}
};

int main(int argc, char* argv[]){
	
	int result = MaxSumSubArraySizeK::findMax(2, vector<int>{1,10,2,3,4});
        cout << " Result : " << result << endl ;	
}
