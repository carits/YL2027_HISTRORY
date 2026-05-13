#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,maxn,a[10005];
bool check(int x){
    int pos=0,sum=0;
    for(int i=1;i<=n;i++){
        pos+=a[i];
        if(pos>x){
            pos=a[i];
            sum++;
        }
    }
    if(pos>0) sum++;
    return sum<=m;
}
signed main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        maxn=max(maxn,a[i]);
    }
    if(m>=n){
        cout<<maxn;
        return 0;
    }
    int l=0,r=1e9+1;
    while(l+1<r){
        int mid=l+r>>1;
        if(check(mid)) r=mid;
        else l=mid;
    }
    cout<<r;
    return 0;
}