class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int o = 0;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (x % 3 != 0) {
                o++;
            }
        }

        return o;
    }
};
