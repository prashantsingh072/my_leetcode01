class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
            c=nums[i];
            }if (c==nums[i]){
                count++;
            }else{
                count--;
            }
            
        }return c;
    }
};