class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currsum = 0;
        for(int n:nums) {
            currsum = max(n,currsum+n);
            maxSum = max(maxSum, currsum);
        }
        return maxSum;
    }
};
