#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    void pushZerosToEnd(vector<int>& arr) {
        int n=arr.size();
        int index=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                arr[index++]=arr[i];
            }
        }
        while(index<n){
            
            arr[index++]=0;
        }
        
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
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}