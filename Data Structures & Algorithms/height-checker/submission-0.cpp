class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();

        std::vector<int> expected(n);

        for (int i = 0; i < n; i++) {
            expected[i] = heights[i];
        }

        std::sort(expected.begin(), expected.end());

        int numDeviations = 0;

        for (int i = 0; i < n; i++) {
            if (expected[i] != heights[i]) numDeviations++;
        }

        return numDeviations;
    }
};