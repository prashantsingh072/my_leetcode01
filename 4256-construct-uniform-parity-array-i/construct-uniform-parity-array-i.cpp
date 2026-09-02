class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int> nums2(nums1.size());

        for (int i = 0; i < nums1.size(); i++) {
            if (i == nums1.size() - 1) {
                nums2[i] = nums1[i];
            } else {
                nums2[i] = nums1[i] - nums1[i + 1];
            }
        }

        for (int j = 0; j < nums2.size(); j++) {
            if (nums2[j] % 2 == 0) {
                return true;
            }
        }

        for (int j = 0; j < nums2.size(); j++) {
            if (nums2[j] % 2 != 0) {
                return true;
            }
        }

        return false;
    }
};