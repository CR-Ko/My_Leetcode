#include <iostream>
#include <vector>
#include <map>
using namespace std;
class FruitIntoBasket{
	public:
		static int findNumberOfFruit(const  vector<int>& arr){
			int n = arr.size();
			int j = 0;
			map <int, int>  m;
			int ans = 0;
			for(int i=0;i<arr.size();i++){
				m[arr[i]]+=1;
				while(m.size()>2 && j<=i){
					m[arr[j]]--;
					m.erase(arr[j]);
					j++;
				}
				ans=max(ans, i-j+1);
			}
			return ans;
		}
};



int main(int argc, char* argv[]){
	cout << " Output: " << FruitIntoBasket::findNumberOfFruit(vector<int>{0,1,2,2,2})<<endl;	
}


