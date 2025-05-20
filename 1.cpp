
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int size=arr.size();
        sort(arr.begin(),arr.end());
        if(size<2) return -1;
        int mx=arr[size-1];
        for(int i=size-2;i>=0;i--){
            if(mx!=arr[i]) return arr[i];
        }
        return -1;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}