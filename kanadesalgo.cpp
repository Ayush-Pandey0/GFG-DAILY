#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int maxSum = arr[0];
        int currentSum = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (currentSum + arr[i] > arr[i]) {
                currentSum = currentSum + arr[i];
            } else {
                currentSum = arr[i];
            }

            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }

        return maxSum;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    int result = sol.maxSubarraySum(arr);
    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}
