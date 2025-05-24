#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        if (n == 1) return 0;

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Initialize result
        int ans = arr[n - 1] - arr[0];

        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;

        // Step 3: Traverse the array and find the minimum difference
        for (int i = 0; i < n - 1; i++) {
            int minHeight = min(smallest, arr[i + 1] - k);
            int maxHeight = max(largest, arr[i] + k);

            if (minHeight < 0) continue;

            ans = min(ans, maxHeight - minHeight);
        }

        return ans;
    }
};

int main() {
    int n, k;
    cout << "Enter number of towers: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter heights of towers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of K: ";
    cin >> k;

    Solution sol;
    int result = sol.getMinDiff(arr, k);
    cout << "Minimum possible difference: " << result << endl;

    return 0;
}
