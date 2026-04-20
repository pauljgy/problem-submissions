class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int minPrice = prices[0];
        int r = 0;
        int maxProfit = 0;
        int temp;

        while (r < n) {
            temp = prices[r] - minPrice;
            maxProfit = max(maxProfit, temp);

            minPrice = min(prices[r], minPrice);
            r++;
        }

        return maxProfit;
    }
};
