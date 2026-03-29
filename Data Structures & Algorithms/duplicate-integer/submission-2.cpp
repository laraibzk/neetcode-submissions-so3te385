class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int len = nums.size();
        if(len <= 1) {
            return false;
        }
        unordered_set<int> si;
        for(int i=0;i<len;i++) {
            if(si.find(nums[i])!= si.end()) {
                return true;
            }
        si.insert(nums[i]);
        }
        return false;
        }
};
