class Solution {
public:
    int fn(int i, int buy, vector<int>& prices,
           vector<vector<int>>& dp) {
        int n = prices.size();
        if (i == n) return 0;
        if (dp[i][buy] != -1)
            return dp[i][buy];
        if (buy == 1) {
            int buyt = -prices[i] + fn(i + 1, 0, prices, dp);
            int buyn = fn(i + 1, 1, prices, dp);
            return dp[i][buy] = max(buyt, buyn);
        }
        else {
            int sellt = prices[i] + fn(i + 1, 1, prices, dp);
            int selln = fn(i + 1, 0, prices, dp);
            return dp[i][buy] = max(sellt, selln);
        }
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return fn(0, 1, prices, dp);
    }
};
