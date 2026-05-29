class Solution {
public:
    void getallsubset(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubsets) {
       
        allsubsets.push_back(ans);

        for (int ind = i; ind < nums.size(); ind++) {
    
            if (ind > i && nums[ind] == nums[ind - 1]) continue;

            ans.push_back(nums[ind]);

            getallsubset(nums, ans, ind + 1, allsubsets);
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> allsubsets;
        vector<int> ans;
        getallsubset(nums, ans, 0, allsubsets);
        return allsubsets;
    }
};
