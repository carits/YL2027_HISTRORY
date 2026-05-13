
#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,ans;
int const N=1e3+5;
int a[N],p[N];
int sl(){
    int mx=0,rs=0;
    for(int i=1;i<=n;i++)rs=rs+a[i]*i,mx=max(mx,a[i]*i);
    return rs-mx;
}
void slove(){
    ans=0;
    cin>> n;
    for(int i=1;i<=n;i++)a[i]=i;
    for(int i=1;i<=n;i++){
        reverse(a+i,a+n+1);
        ans=max(ans,sl());
        reverse(a+i,a+n+1);
    }
    cout<< ans << "\n";
}
signed main(){
    cin>> t;
    while(t--)slove();
    return 0;
}