class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> setter;
        int l = 0, res=0;
        for(int i=0;i<s.size();i++) {
            while(setter.find(s[i])!= setter.end()) {
                setter.erase(s[l]);
                l++;
            }
            setter.insert(s[i]);
            res = max(res, i-l+1);
        }
        return res;
    }
};
