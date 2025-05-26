#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Solution class
class Solution {
public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        int max_ending_here = arr[0];
        int min_ending_here = arr[0];
        int max_so_far = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] < 0)
                swap(max_ending_here, min_ending_here);

            max_ending_here = max(arr[i], max_ending_here * arr[i]);
            min_ending_here = min(arr[i], min_ending_here * arr[i]);

            max_so_far = max(max_so_far, max_ending_here);
        }

        return max_so_far;
    }
};

// Main function
int main() {
    Solution sol;

    vector<int> arr1 = {-2, 6, -3, -10, 0, 2};
    cout << "Maximum product of subarray: " << sol.maxProduct(arr1) << endl;

    vector<int> arr2 = {-1, -3, -10, 0, 6};
    cout << "Maximum product of subarray: " << sol.maxProduct(arr2) << endl;

    return 0;
}
