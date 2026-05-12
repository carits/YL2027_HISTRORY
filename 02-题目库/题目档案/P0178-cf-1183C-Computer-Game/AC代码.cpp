#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q; cin >> q;
    while(q--){
        long long k,n,a,b;
        cin >> k >> n >> a >> b;
        if(n*b >= k){
            cout << -1 << '\n';
            continue;
        }
        long long rem = k - 1 - n*b;
        long long ans = min(n, rem / (a-b));
        cout << ans << '\n';
    }
    return 0;
}
