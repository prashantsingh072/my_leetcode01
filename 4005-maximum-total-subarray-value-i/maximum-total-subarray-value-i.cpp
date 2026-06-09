class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        long long diff = nums.back() - nums.front();
        return diff * k;
    }
};