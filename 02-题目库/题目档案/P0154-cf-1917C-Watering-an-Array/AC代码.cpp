#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin>>T;
    while(T--){
        int n,k; long long d; cin>>n>>k>>d;
        vector<int>a(n+1),v(k);
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int &x:v) cin>>x;
        long long ans=0;
        int lim=min<long long>(d,2*n+5);
        for(int step=0;step<lim;step++){
            int cnt=0;
            for(int i=1;i<=n;i++) if(a[i]==i) cnt++;
            ans=max(ans, (long long)cnt + (d-step-1)/2);
            int b=v[step%k];
            for(int i=1;i<=b;i++) a[i]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
