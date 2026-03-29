class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<=1)
            return false;
        unordered_set<int> check(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(check.find(nums[i]) != check.end())
        //         return true;
        //     check.insert(nums[i]);
        // }
        return check.size() < nums.size();
    }
};
