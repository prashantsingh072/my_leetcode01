class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        string ans = "";
        int minLen = INT_MAX;
        for (int i = 0; i < s.length(); i++) {
            int count = 0;
            string a = "";
            for (int j = i; j < s.length(); j++) {
                a += s[j];
                if (s[j] == '1') {
                    count++;
                }
                if (count == k) {
                    int len = a.length();
                    if (len < minLen) {
                        minLen = len;
                        ans = a;
                    }
                    else if (len == minLen) {
                        ans = min(ans, a);
                    }
                    break;
                } }
        }
        return ans;
    }
};