class Solution {
public:
    bool isPalindrome(string s) {
        string r = "";
        for ( int i=0; i<=s.size();i++) {
            char c = s[i];
            if(isalnum(c)) {
                r += tolower(c);
            }
        }
        return r == string(r.rbegin(), r.rend());
        
    }
};
