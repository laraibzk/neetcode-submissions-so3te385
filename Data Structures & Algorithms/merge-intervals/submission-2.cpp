class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> output;
        output.push_back(intervals[0]); // insert 1st interval
        for(auto& interval: intervals){
            int start = interval[0];
            int end = interval[1];
            int lastEnd = output.back()[1]; //end of last element of the output array
            // 1, 3
            // 2, 6
            if(start<=lastEnd) {
                output.back()[1] = max(lastEnd, end); // since 2 is less than 3, update the last update
            } else {
                output.push_back({start, end});
            }
        }
        return output;
    }
};
