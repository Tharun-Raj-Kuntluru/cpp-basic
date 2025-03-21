#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, bottom = n - 1, left = 0, right = m - 1;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; ++i) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bottom; ++i) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; --i) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<"Matrix:"<<endl;
    for(int i = 0; i<matrix.size(); ++i){
        for(int j = 0; j<matrix[0].size(); ++j){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    Solution sol;
    vector<int> result = sol.spiralOrder(matrix);
    cout<<"Spiral Traversal:"<<endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
