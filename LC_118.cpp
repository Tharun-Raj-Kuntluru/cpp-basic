#include <bits/stdc++.h>

class Solution {
private:
    std::vector<int> produceRow(int r){
        long long int ans = 1;
        std::vector<int> row;
        row.push_back(ans);
        for(int i = 1; i<r; ++i){
            ans = ans * (r-i);
            ans = ans/i;
            row.push_back(ans);
        }
        return row;
    }    
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result;
        for(int i = 1; i<=numRows; ++i){
            result.push_back(produceRow(i));
        }
        return result;
    }
};

int main() {
    Solution solution;
    int numRows = 5;
    std::vector<std::vector<int>> result = solution.generate(numRows);

    for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}