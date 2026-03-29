class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int count=0;
        for(int i =0;i<s.size();i++) {
            unordered_set<char> dupe;
            for(int j =i; j< s.size();j++) {
                if(dupe.count(s[j]))
                    break;
                dupe.insert(s[j]);

            }
            count = max(count, (int)dupe.size());
            
        }
        return count;
    }
};
