#include <iostream>
#include <vector>
#include <unordered_set>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& nums) {
        bool allNegative = true;
        int maxVal = INT_MIN;

        for (int n : nums) {
            if (n > 0) allNegative = false;
            if (n > maxVal) maxVal = n;
        }

        if (allNegative) return maxVal;

        unordered_set<int> unique(nums.begin(), nums.end());
        int sum = 0;
        for (int n : unique) {
            if (n > 0) sum += n;
        }

        return sum;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> testCases = {
        {1, 2, 2, 3, 4},          
        {-1, -2, -3, -4},         
        {0, 1, -1, 2, 3, 3},      
        {5, 5, 5, 5},             
        {},                       
        {-10, 0, -20},            
    };

    for (int i = 0; i < testCases.size(); ++i) {
        int result = sol.maxSum(testCases[i]);
        cout << "Test case " << i+1 << ": Result = " << result << endl;
    }

    return 0;
}
