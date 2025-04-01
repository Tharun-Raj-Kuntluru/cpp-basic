#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxLen(vector<int> &arr)
    {
        unordered_map<int, int> mpp;
        int sum = 0;
        int maxi = 0;
        for (int i = 0; i < arr.size(); ++i)
        {
            sum += arr[i];
            if (sum == 0)
                maxi = i + 1;
            else
            {
                if (mpp.find(sum) != mpp.end())
                    maxi = max(maxi, i - mpp[sum]);
                else
                    mpp[sum] = i;
            }
        }
        return maxi;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--)
    {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}
