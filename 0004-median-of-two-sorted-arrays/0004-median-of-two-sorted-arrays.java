class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length, n = nums2.length;
        int m1 = 0,m2 = 0;
        int i =0, j=0;
        while(i<m && j<n) {
            if(nums1[i]<=nums2[j]) {
                if(i+j == (m+n)/2) {
                    m1 = nums1[i];
                } else if(i+j == (m+n)/2 - 1) {
                    m2 = nums1[i];
                }
                i++;
            } else {
                if(i+j == (m+n)/2) {
                    m1 = nums2[j];
                } else if(i+j == (m+n)/2 - 1) {
                    m2 = nums2[j];
                }
                j++;
            }
        }
        while(i<m) {
            if(i+j == (m+n)/2) {
                m1 = nums1[i];
            } else if(i+j == (m+n)/2 - 1) {
                m2 = nums1[i];
            }
            i++;
        }
        while(j<n) {
            if(i+j == (m+n)/2) {
                m1 = nums2[j];
            } else if(i+j == (m+n)/2 - 1) {
                m2 = nums2[j];
            }
            j++;
        }
        if((m+n)%2 == 0) {
            return (double) (m1 + m2)/2;
        } else {
            return (double) m1;
        }
    }
}