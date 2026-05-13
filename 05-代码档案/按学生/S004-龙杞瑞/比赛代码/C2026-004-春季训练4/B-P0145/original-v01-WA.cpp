#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e9+7;
int n,k,cnt,mini=1e9,a[10005],b[10005],c[1005][1005];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++){
        cnt=1;
        for(int j=1;j<=b[i];j++) cnt=cnt*2%N;
        cout<<cnt%N<<'\n';
    }
    return 0;
}