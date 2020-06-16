#include <iostream>
#include <vector>
using namespace std;

class MaxSum{
	public:
		static int findSum(int k, const vector<int>& arr){
			int cur = 0;
			for(int i = 0 ; i < arr.size()-k+1;i++){ //here
				int sum = 0;
				for(int j=i;i<i+k;j++){
					sum+=arr[j];
				}
				if(cur<sum){
					cur = sum;
				}	
			}
			return cur;
		}
};

int main(int argc, char* argv[]){
	int res = MaxSum::findSum(3, vector<int>{2,1,5,1,3,2});
	cout<<"Result is: "<< res << endl;
}
