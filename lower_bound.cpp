#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lowerBound(vector<int> &nums, int x) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 3, 5, 7, 9};
    int x = 3;

    int result = sol.lowerBound(nums, x);
    cout << "Lower bound index of " << x << " is: " << result << endl;
    return 0;
}
