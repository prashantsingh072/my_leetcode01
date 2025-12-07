class Solution {
public:
    int distinctIntegers(int n) {
        int c=0;
        if(n>2){
        if(n % (n - 1) == 1){
         c=n-1;}}else{return 1;}
        return c;
    }
};