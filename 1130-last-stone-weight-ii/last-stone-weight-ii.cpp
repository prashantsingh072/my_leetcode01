class Solution {
public:
    int fn(vector<vector<int>>& dp, vector<int>& stones, int target, int i) {
        if (i == stones.size()) {
            return 0;
        }
        if (dp[i][target] != -1) {
            return dp[i][target];
        }
        int notTake = fn(dp, stones, target, i + 1);
        int take = 0;
        if (stones[i] <= target) {
            take = stones[i] + fn(dp, stones, target - stones[i], i + 1);
        }
        return dp[i][target] = max(take, notTake);
    }
    int lastStoneWeightII(vector<int>& stones) {
        int total = 0;
        for (int i = 0; i < stones.size(); i++) {
            total += stones[i];
        }
        int target = total / 2;
        vector<vector<int>> dp(
            stones.size(),
            vector<int>(target + 1, -1)
        );
        int sum1 = fn(dp, stones, target, 0);
        int sum2 = total - sum1;
        return sum2 - sum1;
    }
};