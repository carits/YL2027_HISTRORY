#include <bits/stdc++.h>
using namespace std;
int t, n, a[15];
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        bool flag = 0;
        for (int i = 1; i <= n; i++) cin >> a[i];
        a[n + 1] = a[n];
        for (int i = 1; i <= n; i++){
            if (a[i] > a[i + 1]){
                cout << n - (n - i) - (i - 1) << '\n';
                flag = 1;
                break;
            }
        }
        if (!flag) cout << n << '\n';
    }
    return 0;
}