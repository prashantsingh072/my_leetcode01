class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int count = 0;
        int minv = nums[0];
        int maxv = nums[0];
        int mini = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            minv = min(minv, nums[i]);
            maxv = max(maxv, nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == minv) {
                mini = i;
                break;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxv) {
                maxi = i;
                break;
            }
        }
        if (mini > maxi) {
            swap(mini, maxi);
        }
        int front = maxi + 1;
        int back = nums.size() - mini;
        int middle = (mini + 1) + (nums.size() - maxi);
        count = min(front, min(back, middle));
        return count;
    }
};