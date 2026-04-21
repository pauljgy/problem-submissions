class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profitSum = 0;

        int l = 0, r;
        int n = prices.size();

        while (l < n) {
            r = l;
            while (r + 1 < n && prices[r+1] > prices[r]) {
                r++;
            }

            profitSum += (prices[r] - prices[l]);

            l = r+1;
        }

        return profitSum;
    }
};