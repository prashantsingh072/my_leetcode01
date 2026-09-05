class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = nums[0];
        vector<int> minm(n);
        minm[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            minm[i] = min(minm[i + 1], nums[i]);
        }
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            int stable = maxi - minm[i];
            if(stable <= k) {
                return i;
            }
        }
        return -1;
    }
};
           