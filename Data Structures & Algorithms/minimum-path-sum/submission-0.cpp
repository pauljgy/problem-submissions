class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        std::vector<std::vector<int>> dp(m, std::vector<int>(n));

        dp[0][0] = grid[0][0];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // i == 0

                if (i == 0 && j == 0) continue;


                if (i == 0) {
                    dp[i][j] = dp[i][j-1] + grid[i][j];
                } else if (j == 0) {
                    dp[i][j] = dp[i-1][j] + grid[i][j];
                } else {
                    dp[i][j] = std::min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
                }
            }
        }

        return dp[m-1][n-1];
    }
};