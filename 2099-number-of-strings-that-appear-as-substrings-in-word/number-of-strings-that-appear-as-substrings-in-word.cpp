class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;

        for (int i = 0; i < patterns.size(); i++) {
            bool found = false;

            // If pattern is longer than word, skip it
            if (patterns[i].size() > word.size())
                continue;

            for (int j = 0; j <= (int)word.size() - (int)patterns[i].size(); j++) {

                int k;
                for (k = 0; k < patterns[i].size(); k++) {
                    if (word[j + k] != patterns[i][k])
                        break;
                }

                if (k == patterns[i].size()) {
                    found = true;
                    break;
                }
            }

            if (found)
                count++;
        }

        return count;
    }
};