#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }

        int res = -1;
        for (auto& p : freq) {
            if (p.first == p.second) {
                res = max(res, p.first);
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 2, 3, 4};
    cout << "Lucky Integer: " << sol.findLucky(arr) << endl;
    return 0;
}
