class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;

        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        vector<pair<char, int>> v;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            v.push_back({it->first, it->second});
        }

        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
            return a.second > b.second;
        });

        string ans = "";

        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].second; j++) {
                ans += v[i].first;
            }
        }

        return ans;
    }
};