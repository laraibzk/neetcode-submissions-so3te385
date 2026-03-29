class Solution {
public:
    int maxArea(vector<int>& heights) {
    // int res = 0;
    // int area = 0;
    // for(int i=0;i<heights.size();i++) {
    //     for (int j=i+1; j<heights.size();j++) {
    //         area = (j - i) * min(heights[i], heights[j]);
    //         res = max(area, res);
    //     }
    // }
    // return res;
    // }
    int res =0;
    int l=0, r = heights.size()-1, area=0;
    while( l < r) {
        area = (r - l) * min(heights[r], heights[l]);
        res = max(area, res);
        if(heights[l] < heights[r])
            l++;
        else r--;
    }
    return res;
    }
};
