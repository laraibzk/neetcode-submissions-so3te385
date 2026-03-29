class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int len = nums.size();
        if(len <= 1) {
            return false;
        }
        sort(nums.begin(), nums.end()); 
        for(int i=0;i<len;i++) {
                if(nums[i]==nums[i+1]) {
                    return true;
                }
            }
            return false;   
        }
};
