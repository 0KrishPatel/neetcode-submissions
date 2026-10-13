class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int l = 0;
        int r = (int)heights.size() - 1;
        while (l < r) {
            int minval = min(heights[l], heights[r]);
            area = max(area, minval * (r - l));
            if (heights[l] < heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return area;
    }
};