#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Interval{
	public:
		int start = 0;
		int end = 0;
		
		Interval(int start, int end){
			this->start = start;
			this->end  = end;
		}	
};

class MergeIntervals {
	public:
		static vector<Interval> merge(vector<Interval> &intervals){
			//vector<Interval> mergedIntervals;
		 	if(intervals.size() < 2){
				return intervals;
			}

			// sort the intervals by start time
			// Need to be test
			sort(intervals.begin(), intervals.end(), 
					[](const Interval &x, const Interval &y){return x.start < y.start;});
			
			
			vector<Interval> mergedIntervals;

			vector<Interval>::const_iterator intervalItr = intervals.begin();
			Interval interval = *intervalItr++;
			int start = interval.start;
			int end   = interval.end;
			while(intervalItr!=intervals.end()){
				interval = *intervalItr++;
				// overlapping intervals, adjust the "end"
				if(interval.start <= end){
					end = max(interval.end, end);	
				}else{
					//non-overlapping interval, add the previous interval and reset
					mergedIntervals.push_back({start, end});
					start = interval.start;
					end = interval.end;
				}
			}
                       
		        // Add the last interval
			mergedIntervals.push_back({start, end});
			return mergedIntervals;

			//cout << " intervals: " << intervals << endl;	
		}

};

int main(int argc, char* argv[]){
	vector<Interval> input = {{1,3}, {2,5},{7,9}};
	cout << " Merged intervals: ";
	for (auto interval : MergeIntervals::merge(input)){
		cout << "[" << interval.start << "," << interval.end << "] ";
	}
	cout << endl;
}






