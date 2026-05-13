#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=65;
int t,n,k,a[N][N];
void init(){
    for(int i=0;i<N;i++){
        a[i][0]=1;
        for(int j=1;j<=i;j++) a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
}
void solve(){
	cin>>n>>k;
    int cnt=0,minn,tmp=n,ans=0;
    while(tmp>1){
        tmp/=2;
        cnt++;
    }
    if(cnt+1>k) ans++;
    for(int i=0;i<cnt;i++){
        minn=k-i;
        if(minn<0) minn=0;
        if(minn>i) continue;
        for(int j=minn;j<=i;j++) ans+=a[i][j];
    }
    cout<<ans<<"\n";
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    init();
    while(t--) solve();
    return 0;
}