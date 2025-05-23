#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        for (int price : prices) {
            minPrice = min(minPrice, price);               // update min price so far
            maxProfit = max(maxProfit, price - minPrice);  // update max profit
        }
        
        return maxProfit;
    }
};

int main() {
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2}; // sample input
    Solution obj;
    int result = obj.maximumProfit(prices);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}
