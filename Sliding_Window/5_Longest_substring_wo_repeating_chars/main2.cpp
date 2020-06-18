#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution{
	public:
		static int findMaxLenWithoutRepeat(string s){
			int length = 0;
			int right  = 0;
			int left   = 0;
			//vector<string> chars;
 			// choose what container
			unordered_set<char> chars;
			while(right<s.size() && left<s.size()){
					if(s[right]==s[left]){
						chars.erase(s[left]);
						chars.insert(s[right]);
					left++;
					}
					else{	
						chars.insert(s[right]);
					}
					right++;
			}
		        for(auto e : chars){
				cout<<"Elements are: " << e << endl;
			}	
			return chars.size();
		
		}
};


int main(int argc, char* argv[]){
	//vector<String> arr = {a,b,c,a,b,c,b,b};
	string s = "babbcazc";
	int result = Solution::findMaxLenWithoutRepeat(s);
        cout<<" The Max length of Non-repeat char: "<<result<<endl;
}
