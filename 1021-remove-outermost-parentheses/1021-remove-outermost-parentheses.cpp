class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int depth = 0;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == '(') {
                if (depth > 0) {
                    result += c;
                }
                depth++;
            } else {
                depth--;
                if (depth > 0) {
                    result += c;}
                
            }
        }
        return result;
    }
};
