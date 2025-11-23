class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3, 0);
        for (int x : nums) {
            vector<int> curr = dp;
            for (int r = 0; r < 3; r++) {
                int newSum = dp[r] + x;
                curr[newSum % 3] = max(curr[newSum % 3], newSum);
            }
            dp = curr;
        }
        return dp[0];
    }
};  
    