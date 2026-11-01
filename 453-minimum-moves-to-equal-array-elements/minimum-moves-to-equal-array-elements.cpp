class Solution {
public:
    int minMoves(vector<int>& nums) {
         int minm= nums[0];
        int moves = 0;
        for (int num : nums) {
            minm =min(minm, num);
        }
        for (int num : nums) {
            moves += num - minm;
        }
        return moves;
    }
};