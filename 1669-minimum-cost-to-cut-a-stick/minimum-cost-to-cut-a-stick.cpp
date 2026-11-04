class Solution {
public:
    vector<vector<int>> dp;
    int fn(int i, int j, vector<int>& cuts) {
        if (j - i <= 1) return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int sum = cuts[j] - cuts[i];
        int ans = INT_MAX;
        for (int k = i + 1; k < j; k++) {
            int cost = fn(i, k, cuts) +
                       fn(k, j, cuts) + sum;
            ans = min(ans, cost);
        }
        return dp[i][j] = ans;
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());
        int m = cuts.size();
        dp.assign(m, vector<int>(m, -1));
        return fn(0, m - 1, cuts);
    }
};