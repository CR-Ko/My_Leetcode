#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class SmallSub{
	public:
		static int findSmall(int s, const vector<int>& arr){
			int j = 0;
			int sum=0;
			int L;
			int minL =numeric_limits<int>::max(); 
			for(int i=0;i<arr.size();i++){
				cout<<"i: "<<i<<endl;
				sum+=arr[i];	
				while(sum >= s){  //here
					L = min(L, i-j+1);//here	
					sum -= arr[j];
					j++;
				}
				cout<<"j: "<<j<<endl;
				
			}
			cout<<"L: "<<L<<endl;	
			return L;                         //here
		}
		
};


int main(int argc, char* argv[]){
	int res = SmallSub::findSmall(7, vector<int>{2,1,5,2,8});
	cout<<res<<endl;
}

