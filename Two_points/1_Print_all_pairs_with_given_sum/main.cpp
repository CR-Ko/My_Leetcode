#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Solution {
	public:
		static int printPairs(int arr[], int n, int sum){
				int count = 0;
				for(int i = 0; i < n; i++)
					for(int j = i + 1; j < n; j++)
						if(arr[i]+arr[j]==sum)
							cout<< "(" << arr[i] << ","
							    << arr[j] << ')' << endl;
		}
};

int main(int argc, char* argv[]){
	int arr[] = {1, 5, 7,-1,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 6;
	int result = Solution::printPairs(arr, n, sum);
	cout << " : " << result << endl;
}



