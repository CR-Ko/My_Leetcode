#include <iostream>
#include <vector>
#include <string>
using namespace std;

// This function returns True whem all characters in str[i...j]
// are distinct, otherwise returns False
class AreDistinct{
	public:
		static bool TwoCharAreDistinct(const string &str, int i, int j){
			vector<bool> visited(26);
			for(int k=i;k<=j;k++){
				if(visited[str[k]-'a']==true){
					return false;
				}
				visited[str[k]-'a']=true;
			}
			return true;
		}
};


class LongestLength{
	public:
		static int findLengthOfLongestUniqueSubstr(const string &str){
			int n = str.size();
			int res = 0;
			cout<<"n: "<<n<<endl;
			for(int i=0;i<n;i++){
				for(int j=i;j<n;j++){
					if(AreDistinct::TwoCharAreDistinct(str, i, j))
					{
						cout<<res<<endl;
						res = max(res, j-i+1);//here
						
					}
				}
			
			}
			return res;
	}
};


int main(int argc, char* argv[]){
	string str = "geeksforgeeks";
	cout<< "The input string is: "<< str<<endl;
	int len = LongestLength::findLengthOfLongestUniqueSubstr(str);
	cout<<"Len: "<<len<<endl;
}
