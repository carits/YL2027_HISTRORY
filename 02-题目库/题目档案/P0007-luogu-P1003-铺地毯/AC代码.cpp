#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y;
    cin >> n;
    vector<int> a(n), b(n), g(n), k(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> g[i] >> k[i];
    cin >> x >> y;
    for(int i = n - 1; i >= 0; i--){
        if(a[i] <= x && x <= a[i] + g[i] && b[i] <= y && y <= b[i] + k[i]){
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}
