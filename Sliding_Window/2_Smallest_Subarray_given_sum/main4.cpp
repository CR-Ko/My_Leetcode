#include <iostream>
#include <vector>
#include <limits>
using namespace std;


class SmallestSub{
	public:
		static int findLength(int s, const vector<int>& arr){
			int minL = numeric_limits<int>::max(); // why this
			//cout<< minL<<endl;
			int j = 0;
			int sum = 0;
			for(int i=0; i<arr.size();i++){
				sum += arr[i];
				//cout<<sum<<endl;
				while(sum>=s){ // why while
					minL = min(minL, i-j+1);//why here 
                                        sum-=arr[j];
					j++;
				}
			}
			return minL==numeric_limits<int>::max()? 0:minL;			
		}
};

int main(int argc, char* argv[]){
	int res = SmallestSub::findLength(7, vector<int>{2,1,5,2,3,2});
	cout<<res<<endl;
}
