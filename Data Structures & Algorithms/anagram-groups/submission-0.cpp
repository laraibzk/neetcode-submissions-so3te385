class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result;
        for( int i = 0; i< strs.size();i++) {
            vector<int> count(26, 0);  
            string s = strs[i];
            for ( char c : s) {
                count [c - 'a']++;
            }
            string key = to_string(count[0]);
            for (int i =1; i< 26; i++) {
                key += ',' + to_string(count[i]);
            }
            result[key].push_back(s);
        }
        vector<vector<string>> fin;
        for(auto pair: result) {
            fin.push_back(pair.second);
        }
        return fin;
              
        } 
    };
