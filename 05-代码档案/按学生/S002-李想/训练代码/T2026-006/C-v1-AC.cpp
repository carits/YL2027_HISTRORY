#include<bits/stdc++.h>
using namespace std;

int t,n,q;
int const N=2e5+5; 
int a[N],b[N],sum[N];
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin>> t;
    while(t--){
        cin>> n >> q;
        for(int i=1;i<=n;i++)cin>> a[i];
        for(int i=1;i<=n;i++)cin>> b[i];
        a[n+1]=0; 
        for(int i=n;i>=1;i--){
            a[i]=max({a[i],b[i],a[i+1]});
        }
        for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
//        cout<< a[1] << " ";
        while(q--){
            int l,r;
            cin>> l >> r;
            cout<< sum[r]-sum[l-1] << " ";
        }
        cout<< "\n";
        for(int i=1;i<=n;i++)sum[i]=0;
    }
    return 0;
} 