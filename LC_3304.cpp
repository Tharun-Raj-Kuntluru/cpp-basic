#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
        string sb = "a";
        while (sb.length() < k) {
            int size = sb.length();
            for (int i = 0; i < size; ++i) {
                char nextChar = 'a' + ((sb[i] - 'a' + 1) % 26);
                sb += nextChar;
            }
        }
        return sb[k - 1];
    }
};

int main() {
    Solution sol;
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    char result = sol.kthCharacter(k);
    cout << "The " << k << "th character is: " << result << endl;
    return 0;
}
