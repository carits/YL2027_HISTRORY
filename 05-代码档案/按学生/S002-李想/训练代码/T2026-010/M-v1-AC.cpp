#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,m,ans;
int const N=1e6+5;
int a[N];
bool check(int step){
    int sum=0;
    for(int i=1;i<=n;i++)sum+=max(0ll,a[i]-step);
    if(sum>=m)ans=step;
    return sum>=m;
}
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin>> n >> m;
    for(int i=1;i<=n;i++)cin>> a[i];
    int l=1,r=4e5;
    while(l<=r){
        int mid=(l+r)>>1;
        if(check(mid))l=mid+1;
        else r=mid-1;
    }
    cout<< ans;
    return 0;
}