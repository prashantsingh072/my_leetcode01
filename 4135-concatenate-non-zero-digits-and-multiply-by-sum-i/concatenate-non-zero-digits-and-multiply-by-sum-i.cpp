class Solution {
public:
    long long sumAndMultiply(int n) {
        long long a = 0, b= 0;
        for (char y : to_string(n))
            if (y != '0')
                a = a* 10 + y - '0',b += y - '0';
        return a * b;
    }
};