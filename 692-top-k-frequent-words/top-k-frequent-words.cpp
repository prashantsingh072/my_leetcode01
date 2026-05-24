class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        sort(words.begin(), words.end());
        vector<pair<int, string>> v;
        int n = words.size();
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (words[i] == words[i - 1]) {
                count++;
            } else {
                v.push_back({count, words[i - 1]});
                count = 1;
            }
        }
        v.push_back({count, words[n - 1]});
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if (a.first == b.first)
                return a.second < b.second;
            return a.first > b.first;
        });
        vector<string> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};