#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class LongestSubstringKDistinct{
	public:
		static int findLength(const string &str, int k){
			int windowStart = 0, maxLength = 0;
		 	unordered_map<char, int> charFrequencyMap;
			// in the following loop we'll try to expand the range [windowStart, windowEnd]i
			cout << "-- str length: " << str.length() << endl;  
			for(int windowEnd=0;windowEnd<str.length(); windowEnd++){
				char rightChar = str[windowEnd];
				charFrequencyMap[rightChar]++;
				while((int)charFrequencyMap.size() > k){
					char leftChar = str[windowStart];
					charFrequencyMap[leftChar]--;
					if(charFrequencyMap[leftChar]==0){
						charFrequencyMap.erase(leftChar);
					}
					windowStart++;
					cout << " windowStart: " << windowStart << endl;
				}
				cout << " windowStart: " << windowStart << endl;
				cout << " windowEnd: " << windowEnd << endl;
				
				maxLength = max(maxLength, windowEnd - windowStart + 1);
				cout << "maxLength: " << maxLength << endl;
			}
		return maxLength;
	}

};	


int main(int argc, char* argv[]){
	
	cout << "Length of the longest substring: " << LongestSubstringKDistinct::findLength("araaci", 2);
	cout << endl;

}

