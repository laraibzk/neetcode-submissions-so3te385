class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int newStart = newInterval[0], newEnd = newInterval[1];
        bool inserted = false;
        for(auto& interval : intervals) {
            int start = interval[0];
            int end = interval[1];
            //current interval is completely before newInterval
            if(end < newStart) {
                res.push_back(interval);
            } //current interval is completel after newInterval 
            else if (start > newEnd) {     
                if(!inserted) {
                    res.push_back({newStart, newEnd});
                    inserted = true;
                }
                res.push_back(interval);
            } //overlapping
            else {
                newStart = min(newStart, start);
                newEnd = max(newEnd, end);
            }
        }
            //if newInterval is still not added, add it in the end
            if(!inserted) {
                res.push_back({newStart, newEnd});
            }
    return res;
    }
};
