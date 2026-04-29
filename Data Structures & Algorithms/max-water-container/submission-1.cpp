class Solution {
public:
    int area(vector<int> &heights, int l, int r) {
        int width = r - l;
        int height = min(heights[l], heights[r]);

        return width * height;
    }

    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;

        int ret = area(heights, l, r);
        while (l < r) {
            if (heights[l] < heights[r]) {
                l++;
            } else {
                r--;
            }
            ret = std::max(ret, area(heights, l, r));
        }

        return ret;
    }
};
