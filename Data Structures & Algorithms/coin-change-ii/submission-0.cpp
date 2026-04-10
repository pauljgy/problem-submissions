class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        vector<int> dp(amount+1);
        dp[0] = 1;
        
        for (int coin_value : coins) {
            for (int i = coin_value; i <= amount; i++) {
                dp[i] += dp[i - coin_value];
            }
        }
        
        return dp[amount];
    }
};
