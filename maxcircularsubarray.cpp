#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        
        // Standard Kadane's Algorithm to find max subarray sum
        int max_kadane = arr[0];
        int curr_max = arr[0];
        
        int total_sum = arr[0];
        int curr_min = arr[0];
        int min_kadane = arr[0];
        
        for (int i = 1; i < n; i++) {
            // For max subarray
            curr_max = max(arr[i], curr_max + arr[i]);
            max_kadane = max(max_kadane, curr_max);
            
            // For min subarray
            curr_min = min(arr[i], curr_min + arr[i]);
            min_kadane = min(min_kadane, curr_min);
            
            // Total sum of the array
            total_sum += arr[i];
        }
        
        // If all elements are negative
        if (total_sum == min_kadane)
            return max_kadane;
        
        // Return the maximum of normal and circular subarray sum
        return max(max_kadane, total_sum - min_kadane);
    }
};

// Main function to test the above code
int main() {
    Solution obj;

    vector<int> arr1 = {8, -8, 9, -9, 10, -11, 12};
    cout << "Maximum circular subarray sum is: " << obj.circularSubarraySum(arr1) << endl;

    vector<int> arr2 = {10, -3, -4, 7, 6, 5, -4, -1};
    cout << "Maximum circular subarray sum is: " << obj.circularSubarraySum(arr2) << endl;

    return 0;
}
