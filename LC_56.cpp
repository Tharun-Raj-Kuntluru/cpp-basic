// Merge intervals problems
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; ++i)
        {
            if (ans.empty() || ans.back()[1] < intervals[i][0])
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    Solution sol;
    vector<vector<int>> new_intervals = sol.merge(intervals);
    for( int i = 0; i<new_intervals.size(); ++i){
        cout<<"{ ";
        for(int j = 0; j<new_intervals[0].size(); ++j){
            cout<<new_intervals[i][j]<<" ";
        }
        cout<<"}";
    }


    return 9;
}