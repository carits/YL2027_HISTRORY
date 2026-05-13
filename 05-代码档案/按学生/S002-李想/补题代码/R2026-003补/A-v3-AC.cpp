#include<bits/stdc++.h>
using namespace std;
#define ll long long

int t,n;
int const N=2e5+5;
ll a[N],vis[N];
void sl(){
    for(int i=1;i<=n;i++)vis[i]=0;
    ll mx=0;
    for(int i=1;i<=n;i++){
        if(vis[a[i]])mx=max(mx,a[i]);
        vis[a[i]]=1,a[i]=mx;
    }
}
void slove(){
    ll ans=0;
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i];
    for(int i=1;i<=n;i++)ans+=a[i];
    sl();
    for(int i=1;i<=n;i++)ans+=a[i];
    sl();
    for(int i=1;i<=n;i++)ans+=(n-i+1)*a[i];
    cout<< ans << "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}