class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        char arr[26];
        for (int i = 0; i < 26; i++) {
            arr[i] = 'z' - i;
        }
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < 26; j++) {
                if (s[i] == arr[j]) {
                    sum += (i + 1) * (j + 1);
                }
            }
        }
        return sum;
    }
};