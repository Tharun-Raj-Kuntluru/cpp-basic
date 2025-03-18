#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        int longest = INT_MIN;
        unordered_set<int> st;
        for (int i = 0; i < n; ++i)
        {
            st.insert(nums[i]);
        }

        for (auto it : st)
        {
            if (st.find(it - 1) == st.end())
            {
                int count = 1;
                int x = it;
                while (st.find(x + 1) != st.end())
                {
                    x++;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};
int main()
{
    vector<int> nums{};
    // Solution sol;
    // sol.
}

// Brute Force Approach:
/*
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int maxLen = 1; // Initialize with 1, as a single element is a sequence
        int currentLen = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                currentLen++;
            } else if (nums[i] != nums[i-1]){ //handle duplicates
                currentLen = 1;
            }

            maxLen = max(maxLen, currentLen);
        }

        return maxLen;
    }
};
*/