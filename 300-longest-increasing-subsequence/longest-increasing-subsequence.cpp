class Solution {
public:
int lowerbound(vector<int>& lis, int target) {
    int l = 0;
    int u = lis.size() - 1;
    int ans = lis.size();

    while (l <= u) {
        int mid = l + (u - l) / 2;

        if (lis[mid] >= target) {
            ans = mid;
            u = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    return ans;
}
    int lengthOfLIS(vector<int>& nums) {
         vector<int> lis;

    for (int i = 0; i < nums.size(); i++) {

        if (lis.empty() || lis.back() < nums[i]) {
            lis.push_back(nums[i]);
        }
        else {
            int pos = lowerbound(lis, nums[i]);
            lis[pos] = nums[i];
        }
    }

    return lis.size();

    }
};