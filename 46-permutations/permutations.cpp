class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        int fact = 1;
        for (int i = 1; i <= n; i++)
            fact *= i;
        for (int f = 0; f < fact; f++) {
            vector<int> temp = nums;
            vector<int> perm;
            int x = f;
            vector<int> factDigits(n, 0);
            for (int i = 1; i <= n; i++) {
                factDigits[n - i] = x % i;
                x /= i;
            }
            for (int i = 0; i < n; i++) {
                int idx = factDigits[i];
                perm.push_back(temp[idx]);
                temp.erase(temp.begin() + idx);
            }
            ans.push_back(perm);
        }
        return ans;
    }
};
