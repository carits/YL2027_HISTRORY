#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e3+5;
int n,maxn,a[N],vis[N];
map<int,int>mp;
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            mp[a[i]+a[j]]++;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            maxn=max(maxn,mp[a[i]+a[j]]);
        }
    }
    cout<<maxn;
    return 0;
}