#include <iostream>
#include <vector>
#include <string>
using namespace std;


class AreDistinct{
	public:
		static bool TwoCharAreDistinct(const string &str, int i, int j){
			vector<bool>visited(26);
			for(int k=i;k<=j;k++){
				//if(visited[str[k]-'a'])
				{
					cout<<  "str[k]: " <<str[k]<<endl;
					cout << "visited[str[k]-'a']: "<<visited[str[k]-'a']<<endl;

				}
			}
			return true;
		}
};


class LongestLength{
	public:
		static int findLength(const string &str){
			int n = str.size();
			int res = 0;
			int cur = 0;
			for(int i =0;i<n;i++){
				for(int j=i;j<n;j++){
					if(AreDistinct::TwoCharAreDistinct(str, i, j))
					{
						res = max(cur, j-i+1);//here
					}	
				}
			}
		}
};


int main(int argc, char* argv[]){
	bool ans = AreDistinct::TwoCharAreDistinct("abcde", 0, 3);
	cout<<ans<<endl;
}
