class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();

        std::vector<int> leftWall(n);
        std::vector<int> rightWall(n);

        int lMax = height[0];

        leftWall[0] = 0;

        for (int i = 1; i < n; i++) {
            leftWall[i] = lMax;
            lMax = max(lMax, height[i]);
        }

        int rMax = height[n-1];
        rightWall[0] = 0;
        for (int i = n-2; i >= 0; i--) {
            rightWall[i] = rMax;
            rMax = max(rMax, height[i]);
        }

        int totalRainWater = 0;

        for (int i = 0; i < n; i++) {
            totalRainWater += max(min(leftWall[i], rightWall[i]) - height[i], 0);
        }

        return totalRainWater;

    }
};