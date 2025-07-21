#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string makeFancyString(std::string s) {
        if (s.length() < 3) {
            return s;
        }

        std::string result = "";

        for (char c : s) {
            int n = result.length();

            if (n >= 2 && result[n - 1] == c && result[n - 2] == c) {
                continue;
            } else {
                result.push_back(c);
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    std::vector<std::string> testCases = {
        "leeetcode",
        "aaabaaaa",
        "aabbcc",
        "aaa",
        "a",
        "",
        "abbbccccdd"
    };

    for (const std::string& testCase : testCases) {
        std::cout << "Input: " << testCase << "\n";
        std::cout << "Output: " << sol.makeFancyString(testCase) << "\n\n";
    }

    return 0;
}
