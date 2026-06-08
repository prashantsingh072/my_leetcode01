class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (x < pivot)
                ans.push_back(x);
        }
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (x == pivot)
                ans.push_back(x);
        }
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (x > pivot)
                ans.push_back(x);
        }
        return ans;
    }
};