class Solution {
public:
    int countEven(int num) {
        int s = 0, n = num;
        while (n > 0) {
            s += n % 10;
            n /= 10;
        }
        if (s % 2 == 0)
            return num / 2;
        return (num - 1) / 2;
    }
};
