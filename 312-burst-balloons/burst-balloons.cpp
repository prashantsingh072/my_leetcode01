class Solution {
public:
    vector<vector<int>> dp;
    int fn(int i, int j, vector<int>& nums) {
        if (i > j) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int res = 0;
        for (int k = i; k <= j; k++) {
            int cost = fn(i, k - 1, nums)
                     + fn(k + 1, j, nums)
                     + nums[i - 1] * nums[k] * nums[j + 1];
            res = max(res, cost);
        }
        return dp[i][j] = res;
    }
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        dp.assign(n + 2, vector<int>(n + 2, -1));
        return fn(1, n, nums);
    }
};
