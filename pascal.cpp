#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1||n==0) return 1;
    return n*fact(n-1);
}
int combination(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main() {
    int line;
    cin>>line;
    // int n;
    // cin >> n;
    // int r;
    // cin >> r;
    // cin.ignore();
    // combination(n,r);
    for(int i=0;i<line;i++){
        for(int space = 0; space < line - i - 1; space++) {
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}