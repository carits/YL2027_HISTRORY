#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,q;
int const N=2e5+5; 
int a[N],b[N],sum[N];
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin>> t;
    while(t--){
        int ans=0;
        cin>> n;
        for(int i=1;i<=n;i++)cin>> a[i];
        for(int i=1;i<=n;i++)cin>> b[i];
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)sum[i]=sum[i-1]+b[i];
        for(int i=1;i<=n;i++)ans=max(ans,a[i]*(upper_bound(sum+1,sum+n+1,n-i+1)-sum-1));
        cout<< ans << "\n"; 
    }
    return 0;
} //