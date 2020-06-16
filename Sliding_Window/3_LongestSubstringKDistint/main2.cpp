#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

class LongestSubarrayKDistinct{
	public:
		static int findLength(int k, const string &str){ // here
			map <char, int> m;  //map <string, int>m;
			int j=0;
			int L=0;
			for(int i=0;i<str.length();i++){
				//cout<<i<<endl;
				char RightChar = str[i]; //here
				m[RightChar]++;
				while(m.size()>k){
					char LeftChar = str[j];
					m.erase(LeftChar); //here
					j++;	
				}
				L = max(L, i-j+1);
			}
			return L;
		}
};

int main(int argc, char* argv[]){
	int res = LongestSubarrayKDistinct::findLength(2, "araaaci");
	cout<<"res: "<<res<<endl;
}
