class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& a, vector<vector<int>>& dp) {
        int m = a.size(), n = a[0].size();

        if (i >= m || j >= n || a[i][j] == 1)
            return 0;

        if (i == m - 1 && j == n - 1)
            return 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        return dp[i][j] = solve(i + 1, j, a, dp) +
                          solve(i, j + 1, a, dp);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        int m = a.size(), n = a[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return solve(0, 0, a, dp);
    }
};