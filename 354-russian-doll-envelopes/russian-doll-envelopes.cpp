
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n = envelopes.size();
        if (n == 0) return 0;
        sort(envelopes.begin(), envelopes.end(),
        [](const vector<int>& a, const vector<int>& b) {
            if (a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });
        vector<int> lis;
        for (int i = 0; i < n; i++) {
            int height = envelopes[i][1];
            if (lis.empty() || lis.back() < height) {
                lis.push_back(height);
            } else {
                auto it = lower_bound(
                    lis.begin(), lis.end(), height
                );
                *it = height;
            }
        }
        return lis.size();
    }
};