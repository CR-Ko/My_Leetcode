#include <iostream>
#include <vector>
using namespace std;


class Maxsub{
	public:
		static int findSum(int k, const vector<int>& arr){
			int res = 0;
			for(int i=0;i<arr.size()-k+1;i++){
				int sum = 0;
				for(int j=i;j<i+k;j++){
					sum+=arr[j];
				}
				if(sum>res){
					res = sum;
				}
			}
			return res;
		}
};

int main(int argc, char* argv[]){
	int res = Maxsub::findSum(3, vector<int>{2,1,5,1,3,2});
	cout<<res<<endl;
}
