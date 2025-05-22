#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int profit = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices[i + 1] > prices[i]) {
                profit += prices[i + 1] - prices[i];
            }
        }
        return profit;
    }
};

int main() {
    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
    Solution sol;
    int result = sol.maximumProfit(prices);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}
