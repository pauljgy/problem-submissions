class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        vector<int> dp(n+1);

        dp[0] = 0;
        dp[1] = 0;

        if (n == 2) return min(cost[0], cost[1]);

        for (int j = 2; j < n+1; j++) {
            dp[j] = min(dp[j-1] + cost[j-1], dp[j-2] + cost[j-2]);
        }

        return dp[n];
    }
};
