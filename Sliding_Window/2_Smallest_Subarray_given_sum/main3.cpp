#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class SmallSubGivenSum{
	public:
		static int findLength(int s, const vector<int>& arr){
			int j=0;
			int L=0;
			int sum=0;
			int minL = numeric_limits<int>::max();
			for(int i=0;i<arr.size();i++){
				//cout<<i<<endl;
				sum+=arr[i];
				while(sum>=s){
					L = min(minL, i-j+1);// Since match condition then find L
					sum-=arr[j];
					j++;
				}
				//L = min(minL,i-j+1);
			}	
			return L;// == minL ? 0 : L ;//here
		}
};

int main(int argc, char* argv[]){
	int res = SmallSubGivenSum::findLength(7, vector<int>{2,1,5,2,3,2});
	cout<<res<<endl;
}
