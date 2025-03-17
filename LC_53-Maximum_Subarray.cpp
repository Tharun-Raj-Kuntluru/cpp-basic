#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        long long maxi = LONG_MIN;

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            maxi = max(maxi, sum);
            if (sum < 0) {
                sum = 0;
            }   
        }
        return maxi;
    }
};

int main() {
    vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution sol; // Create an instance of Solution
    cout << sol.maxSubArray(nums) << endl; // Call the function through the object
    return 0;
}
