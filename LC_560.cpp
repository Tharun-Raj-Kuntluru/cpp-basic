#include <iostream>
#include <vector>

class Solution {
public:
    int subarraySum(std::vector<int>& arr, int k) {
        int n = arr.size(); // taking the size of the array
        
        int ans = 0; // ans variable to store our count
        
        for (int i = 0; i < n; i++) // traverse from the array
        {
            int sum = arr[i]; // provide sum with arr[i]
            
            if (sum == k) // if element itself equal to k, then also increment count
                ans++;
            
            for (int j = i + 1; j < n; j++) // now moving forward,
            {
                sum += arr[j]; // add elements with sum
                
                if (sum == k) // if at any point they become equal to k
                    ans++; // increment answer
            }
            
        }
        
        return ans; // and at last, return answer
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {1, 1, 1};
    int k = 2;
    int result = solution.subarraySum(arr, k);
    std::cout << "Number of subarrays with sum " << k << ": " << result << std::endl;

    std::vector<int> arr2 = {1, 2, 3};
    k = 3;
    result = solution.subarraySum(arr2, k);
    std::cout << "Number of subarrays with sum " << k << ": " << result << std::endl;

    std::vector<int> arr3 = {1, 2, 1, 2, 1};
    k = 3;
    result = solution.subarraySum(arr3, k);
    std::cout << "Number of subarrays with sum " << k << ": " << result << std::endl;

    return 0;
}