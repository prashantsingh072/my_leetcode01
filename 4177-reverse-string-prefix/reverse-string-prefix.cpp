class Solution {
public:
    string reversePrefix(string s, int k) {
        string temp = "";
        for (int i = k - 1; i >= 0; i--) {
            temp += s[i];
        }
              for (int i = k; i < s.size(); i++) {
            temp += s[i];
        }
        return temp;
    }
};

    