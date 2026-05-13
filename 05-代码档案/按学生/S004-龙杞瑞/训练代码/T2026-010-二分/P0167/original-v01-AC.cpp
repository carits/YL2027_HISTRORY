#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n;
    int ans=n+1;
    for (int i=1;i*i<=n;i++){
        int h=(n+i-1)/i;
        ans=min(ans,i+h);
    }
    cout<<ans;
    return 0;
}