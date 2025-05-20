#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size();
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        if(index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i = n - 1; i > index; i--) {
            if(nums[index] < nums[i]) {
                swap(nums[index], nums[i]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3};
    
    cout << "Original permutation: ";
    for(int num : nums) cout << num << " ";
    cout << endl;

    obj.nextPermutation(nums);

    cout << "Next permutation: ";
    for(int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}
