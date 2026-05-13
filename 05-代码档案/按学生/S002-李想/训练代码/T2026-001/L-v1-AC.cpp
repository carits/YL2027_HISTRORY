#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n;
int const N=1e6+5;
int a[N],sum[N];
int g(int x){
    int mx=-1e18,mn=1e18;
    for(int j=x;j<=n;j+=x){
        mx=max(mx,sum[j]-sum[j-x]);
        mn=min(mn,sum[j]-sum[j-x]);
    }
    return mx-mn;
}
signed main(){
    cin>> t;
    while(t--){
        cin>> n;
        for(int i=1;i<=n;i++)cin>> a[i];
        for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
        sort(a+1,a+n+1);
        int ans=-1e18;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ans=max({ans,g(i),g(n/i)});
            }
        }
        cout<< ans << "\n";
    }
	return 0;
}