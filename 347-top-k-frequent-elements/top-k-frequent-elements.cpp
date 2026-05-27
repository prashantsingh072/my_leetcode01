class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> v; 
        int n = nums.size();
        int count = 1;
        for(int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                v.push_back({count, nums[i - 1]});
                count = 1;
            }
        }
        v.push_back({count, nums[n - 1]});
        sort(v.rbegin(), v.rend());
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};