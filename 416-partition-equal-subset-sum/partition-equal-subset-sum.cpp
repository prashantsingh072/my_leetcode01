class Solution {
public:
    int fn(int sub1, int sub2, int i, int j, vector<int>& nums,
           vector<vector<int>>& dp) {
        if (i == nums.size())
            return sub1 == sub2;
        if (dp[i][j] != -1)
            return dp[i][j];
        int a = fn(sub1 + nums[i], sub2, i + 1, j + nums[i], nums, dp);
        int b = fn(sub1, sub2 + nums[i], i + 1, j, nums, dp);
        return dp[i][j] = a || b;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += nums[i];
        if (sum % 2 != 0)
            return false;
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        return fn(0, 0, 0, 0, nums, dp);
    }
};