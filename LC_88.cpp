// Merging of 2 sorted arrays without using extra space
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0, right = left + gap;

            while (right < len) {
                // Case 1: Both elements in nums1
                if (left < m && right < m) {
                    if (nums1[left] > nums1[right]) {
                        swap(nums1[left], nums1[right]);
                    }
                }
                // Case 2: Left in nums1, Right in nums2
                else if (left < m && right >= m) {
                    if (nums1[left] > nums2[right - m]) {
                        swap(nums1[left], nums2[right - m]);
                    }
                }
                // Case 3: Both elements in nums2
                else {
                    if (nums2[left - m] > nums2[right - m]) {
                        swap(nums2[left - m], nums2[right - m]);
                    }
                }
                left++;
                right++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        // Copy sorted nums2 back to nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};

// **Main function to test the merge function**
int main() {
    Solution sol;
    
    vector<int> nums1 = {1, 3, 5, 7, 0, 0, 0};  // nums1 has extra space for nums2
    int m = 4;
    vector<int> nums2 = {2, 4, 6};
    int n = 3;

    cout << "Before merging:\n";
    cout << "nums1: ";
    for (int num : nums1) cout << num << " ";
    cout << "\nnums2: ";
    for (int num : nums2) cout << num << " ";
    cout << endl;

    sol.merge(nums1, m, nums2, n);

    cout << "\nAfter merging:\n";
    cout << "nums1: ";
    for (int num : nums1) cout << num << " ";
    cout << endl;

    return 0;
}
