#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e9+7,M=1e5+5;
int n,k,cnt,mini=1e9,a[M],b[M],pre[M];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    pre[0]=1;
    for(int i=1;i<=1e5+5;i++){
        pre[i]=pre[i-1]*2%N;
    }
    
    for(int i=1;i<=n;i++){
        cout<<pre[b[i]]<<"\n";
    }

    return 0;
}