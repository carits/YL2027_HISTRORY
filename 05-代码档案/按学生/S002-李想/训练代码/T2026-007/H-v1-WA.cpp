#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,k,top,ans;
int const N=1e5+5;
int a[N],sum[N],st[65];
map<int,int>mp;
signed main(){
    cin>> n >> k;
    for(int i=1;i<=n;i++)cin>> a[i];
    for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
    int pw=1;
    for(int i=0;i<=60;i++){
        if(abs(pw)>1e4)break;
        st[++top]=pw;
        pw*=k;
    }
    mp[0]=1;
    for(int i=1;i<=n;i++){
        if(k==1)ans+=mp[sum[i]-1];
        else if(k==-1)ans+=mp[sum[i]-1]+mp[sum[i]+1];
        else{
            for(int j=1;j<=top;j++){
                ans+=mp[sum[i]-st[j]];
            }
        }
        mp[sum[i]]++;
    }
    cout<< ans;
    return 0;
}