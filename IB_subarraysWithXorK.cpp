#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int solve(vector<int> &A, int B) {
        int n1 = A.size();  // Get the size of the array
        int cnt = 0;        // Counter for valid subarrays
        
        // Outer loop picks the starting index of the subarray
        for(int i = 0; i < n1; ++i) {
            long long xorr = 0;  // Initialize XOR sum
            
            // Inner loop picks the ending index of the subarray
            for(int j = i; j < n1; ++j) {
                xorr = xorr ^ A[j];  // Compute XOR of subarray A[i...j]
                
                if(xorr == B) {  // Check if XOR matches target B
                    cnt++;
                }
            }
        }
        return cnt;  // Return count of valid subarrays
    }
};

int main() {
    Solution sol;
    vector<int> A = {4, 2, 2, 6, 4}; // Example input array
    int B = 6; // Target XOR value
    
    int result = sol.solve(A, B);
    cout << "Number of subarrays with XOR " << B << ": " << result << endl;
    
    return 0;
}