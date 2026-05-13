#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t, n, a[100005], ans;
signed main(){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1;i <= n; i++) cin >> a[i];
        ans = 0;
        for(int l=1, r=n;l <= r; l++, r--) ans = __gcd(ans, abs(a[l] - a[r]));
        cout << ans << endl;
    }
    return 0;
}