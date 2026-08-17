class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0;
        int j = 0;
        int k = 0;

        vector<int> temp(m + n);

        // Compare both arrays
        while (i < m && j < n) {
            
            if (nums1[i] < nums2[j]) {
                temp[k] = nums1[i];
                i++;
            }
            else {
                temp[k] = nums2[j];
                j++;
            }

            k++;
        }

        // Copy remaining elements of nums1
        while (i < m) {
            temp[k] = nums1[i];
            i++;
            k++;
        }

        // Copy remaining elements of nums2
        while (j < n) {
            temp[k] = nums2[j];
            j++;
            k++;
        }

        // Copy temp back to nums1
        for (int x = 0; x < m + n; x++) {
            nums1[x] = temp[x];
        }
    }
};