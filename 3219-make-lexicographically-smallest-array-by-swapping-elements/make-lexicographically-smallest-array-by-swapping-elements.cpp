class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = {nums[i], i};
        }
        sort(a.begin(), a.end());
        int i = 0;
        while (i < n) {
            int j = i;
            while (j + 1 < n &&
                   a[j + 1].first - a[j].first <= limit) {
                j++;
            }
            int index[100005];
            int size = 0;
            for (int k = i; k <= j; k++) {
                index[size++] = a[k].second;
            }
            sort(index, index + size);
            for (int k = 0; k < size; k++) {
                nums[index[k]] = a[i + k].first;
            }
            i = j + 1;
        }
        return nums;
    }
};