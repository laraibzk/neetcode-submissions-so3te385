class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int count=0, res=0;
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                int l=i, r=j;
                while(l<r && s[l] == s[r]){
                    l++;
                    r--;
                }
                if(l>=r)
                    res += 1;
            }
            
        }
        return res;
    }
};
