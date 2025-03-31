//Four Sum Problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            int n = nums.size();
            sort(nums.begin(), nums.end());
            vector<vector<int>> ans;
    
            for (int l = 0; l < n - 3; ++l) {
                if (l > 0 && nums[l] == nums[l - 1]) continue; // Skip duplicates
                
                for (int i = l + 1; i < n - 2; ++i) {
                    if (i > l + 1 && nums[i] == nums[i - 1]) continue; // Skip duplicates
                    
                    int j = i + 1, k = n - 1;
                    while (j < k) {
                        long long sum = (long long)nums[l] + nums[i] + nums[j] + nums[k];
                        if (sum < target) {
                            j++;
                        } else if (sum > target) {
                            k--;
                        } else {
                            ans.push_back({nums[l], nums[i], nums[j], nums[k]});
                            while (j < k && nums[j] == nums[j + 1]) j++; // Skip duplicates
                            while (j < k && nums[k] == nums[k - 1]) k--; // Skip duplicates
                            j++;
                            k--;
                        }
                    }
                }
            }
            return ans;
        }
    };
    
int main(){
    vector<int>nums = {1,0,-1,0,-2,2};
    int target = 0;
    Solution sol;
    vector<vector<int>> result = sol.fourSum(nums, target);
    int n = result.size();
    for(int i = 0; i<n; ++i){
        cout<<"[ ";
        for(int j = 0; j<result[0].size(); ++j){
            cout<<result[i][j]<<" ";
        }
        cout<<"]";
    }

}
