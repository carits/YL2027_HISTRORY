#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,a[N],pre[N];
int check(int x){
    int cnt=0;
    for(int i=1;i<=n-x+1;i++){
        if(a[i]*2>=a[i+x-1]) return 1;
    }
    return 0;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int l=0,r=n+1;
    while(l+1<r){
        int mid=l+r>>1;
        if(check(mid)) l=mid;
        else r=mid;
    }
    cout<<l;
    return 0;
}