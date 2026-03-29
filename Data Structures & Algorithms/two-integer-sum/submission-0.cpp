class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapper;
        int n = nums.size();
        for(int i=0; i< n; i++) {
            int compliment = target - nums[i];
            if(mapper.find(compliment) != mapper.end()) 
                return {mapper[compliment], i};
            mapper.insert({nums[i], i});
        }

        
    }
};
