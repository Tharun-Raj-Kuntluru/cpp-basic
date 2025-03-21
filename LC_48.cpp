#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n = matrix.size();
            for(int i = 0; i<n; ++i){
                for(int j = 0; j<i; ++j){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            for(int i = 0; i<n; ++i){
                reverse(matrix[i].begin(),matrix[i].end());
            }
        }
    };
int main(){
    // vector<vector<int>>nums{{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    vector<vector<int>>nums{{1,2,3},{4,5,6},{7,8,9}};

    int n = nums.size();
    int m = nums[0].size();
    cout<<"Inital Array"<<endl;
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    Solution sol;
    sol.rotate(nums);

    
    cout<<"Inital Array"<<endl;

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
}