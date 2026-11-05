class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int co = 0;
        for (int i = 0; i < arr1.size(); i++) {
            int count = 0;
            for (int j = 0; j < arr2.size(); j++) {
                int sum = abs(arr1[i] - arr2[j]);
                if (sum <= d) {
                    count++;
                    break;
                }
            }
            if (count == 0) {
                co++;
            }
        }
        return co;
    }
};
