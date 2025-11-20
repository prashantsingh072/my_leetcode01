class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int distinct[101];  
        int dsize = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) continue;
            int found = 0;
            for(int j = 0; j < dsize; j++) {
                if(distinct[j] == nums[i]) {
                    found = 1;
                    break;
                }
            }
            if(found == 0) {
                distinct[dsize] = nums[i];
                dsize++;
            }
        }
        return dsize;
    }
};
