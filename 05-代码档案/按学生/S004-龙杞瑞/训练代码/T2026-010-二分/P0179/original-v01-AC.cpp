#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,ans,ji,cnt,a[N];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) {
        if(i==1||a[i]==a[i-1]) cnt++;
        else{
            if(ji) ans=max(ans,2*min(ji,cnt));
            ji=cnt;
            cnt=1;
        }
    }
    if(ji) ans=max(ans,2*min(ji,cnt));
    cout<<ans;
    return 0;
}