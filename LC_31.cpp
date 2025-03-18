#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};
int main(){
    vector<int>nums{1,2,3};
    Solution sol;
    sol.nextPermutation(nums);
    for(int num: nums){
        cout<<num << " ";
    }
    cout<<endl;
    return 0;

}