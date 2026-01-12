class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digitSum = 0;
        int elementSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            elementSum += nums[i];

            int x = nums[i];
            while (x > 0) {
                digitSum += x % 10;
                x /= 10;
            }
        }
int a=abs(digitSum - elementSum);
        return  a;
    }
};
