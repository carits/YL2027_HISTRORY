#include <bits/stdc++.h>
using namespace std;
int t;
void so(){
    int n, k, a[105] = {};
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] == k){
            cout << "Yes\n";
            return;
        }
    }
    cout << "NO\n";
}
int main(){
    cin >> t;
    while(t--){
        so();
    }
    return 0;
}