class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int len = nums.size();
        if(len <= 1) {
            return false;
        }
        sort(nums.begin(), nums.end()); 
        for(int i=0;i<len;i++) {
            for(int j=i+1;j<len;j++) {
                if(nums[i]!=nums[j]) {
                    j++;
                }
                else {
                    return true;
                }
            }
            
        }
        return false;
    }
};
