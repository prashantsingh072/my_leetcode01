class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        
        while(n!=0){
           int reminder=n%2;
            if(reminder==1){
            count++;
            }
            n/=2;
        }
        return count;
    }
};