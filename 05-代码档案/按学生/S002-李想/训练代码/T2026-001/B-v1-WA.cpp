#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,t,mx;
int const N=1e5+5;
int a[N],sum[N];
signed main(){
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i];
    for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            mx=max(mx,sum[j]-sum[i-1]);
        }
    }
    cout<< mx;
    return 0;
}