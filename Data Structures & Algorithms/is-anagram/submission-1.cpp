class Solution {
public:
    bool isAnagram(string s, string t) {
        int left = 0, right = s.size();
        map<char, int> countS; 
        map<char, int> countT;  
        if(s.size() != t.size())
            return false;
        int count=0;
        for(int i =0; i<s.length();i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        return countS==countT;
    }
};
