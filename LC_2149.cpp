#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for (int k = 0; k < nums.size(); ++k) {
            if (nums[k] >= 0) {
                pos.push_back(nums[k]);
            } else {
                neg.push_back(nums[k]);
            }
        }

        int i = 0, j = 0, k = 0;
        while (k < nums.size()) {
            nums[k++] = pos[i++];
            nums[k++] = neg[j++];
        }
        return nums;
    }
};

int main() {
    vector<int> nums{3, 1, -2, -5, 2, -4};
    Solution sol;
    vector<int> result = sol.rearrangeArray(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}