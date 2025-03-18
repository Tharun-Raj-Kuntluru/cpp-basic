
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leaders(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans;
        int max = arr[n - 1];
        ans.push_back(max);

        for (int i = n - 2; i >= 0; --i)
        {
            if (arr[i] >= max)
            {
                ans.push_back(arr[i]);
                max = arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--)
    {
        vector<int> a;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        vector<int> result = obj.leaders(a);

        if (result.empty())
        {
            cout << "[]";
        }
        else
        {
            for (int i = 0; i < result.size(); i++)
            {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}
