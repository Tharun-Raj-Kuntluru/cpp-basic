//3 sum problem
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            int n = nums.size();
            sort(nums.begin(), nums.end());
            vector<vector<int>> ans;
            
            for(int i = 0; i < n - 2; i++) {
                if(i > 0 && nums[i] == nums[i-1]) continue;
                if(nums[i] > 0) break;
                
                int j = i + 1;
                int k = n - 1;
                int target = 0;
                
                while(j < k) {
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum < target) {
                        j++;
                    } else if(sum > target) {
                        k--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[k]});
                        while(j < k && nums[j] == nums[j+1]) j++;
                        while(j < k && nums[k] == nums[k-1]) k--;
                        j++;
                        k--;
                    }
                }
            }
            return ans;
        }
};

int main(){
    vector<int>nums = {-1,0,1,2,-1,-4};
    Solution sol;
    vector<vector<int>> result = sol.threeSum(nums);
    int n = result.size();
    for(int i = 0; i<n; ++i){
        cout<<"[ ";
        for(int j = 0; j<result[0].size(); ++j){
            cout<<result[i][j]<<" ";
        }
        cout<<"]";
    }

}