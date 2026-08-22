class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int s = 0;
        int x = 1;

        while (n != 0) {
            int digit = n % 10;

            s = s + digit;
            x = x * digit;

            n = n / 10;
        }

        if (original % (s + x) == 0)
            return true;
        else
            return false;
    }
};