#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int t,n,k,a[N];
int d[N*2];

void solve(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=2;i<=2*k+2;i++) d[i]=0;
    for(int i=1;i<=n/2;i++){
        int x=a[i], y=a[n-i+1];
        int mn=min(x,y), mx=max(x,y),sum=x+y;
        d[2]+=2,d[mn+1]-=2,d[mn+1]+=1;
        d[mx+k+1]-=1,d[sum]-=1,d[sum+1]+=1,d[mx+k+1]+=2;
    }
    int ans=n,cnt=0;
    for(int x=2;x<=2*k;x++){
        cnt+=d[x];
        ans=min(ans,cnt);
    }
    cout<<ans<<'\n';
}
int main(){
    cin>>t;
    while(t--) solve();
    return 0;
}