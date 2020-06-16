#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Fruit{
	public:
		static int findNum(const vector<int>& arr){
			int N=0;
			int j=0;
			map<int, int> m;
			for(int i=0;i<arr.size();i++){
				m[arr[i]]++;
				while(m.size()>2){
					m.erase(arr[j]);
					j++;
				}
				N = max(N, i-j+1);
			}
			return N;
		}
	
};

int main(int argc, char* argv[]){
	int res = Fruit::findNum(vector<int>{1,2,3,2,2});
	cout<<"res: "<<res<<endl;
}
