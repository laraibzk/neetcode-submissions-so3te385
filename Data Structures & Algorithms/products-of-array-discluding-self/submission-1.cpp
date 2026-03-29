class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int prod = 1, zerocount = 0;    
        for(int i = 0; i<n; i++) {
            if(nums[i]!=0) 
                prod*=nums[i];
            else 
                zerocount++;
        }
        if(zerocount > 1) {
            return vector<int>(nums.size(), 0);
        }
        for(int i = 0;i<n;i++) {
            if(zerocount > 0)
                res[i] = (nums[i] == 0)? prod: 0;
            
            else 
                res[i] = prod/nums[i];
        }
        return res;
    }
};
