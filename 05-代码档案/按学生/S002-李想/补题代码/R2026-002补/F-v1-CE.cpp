#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

int t,n;
map<ll,ll>vis;
void slove(){
    cin>> n;
    int l=1e6,r=1e9,flag=vis[n];
    while(l<=r){
        int mid=(l+r)>>1;
        if(mid*mid+mid+1==n){
            flag=1;
        }
        if(mid*mid+mid+1<n)l=mid+1;
        else r=mid-1;
    }
    if(flag)cout<< "YES";
    else cout<< "NO";
    cout<< "\n";
}
signed main(){
    cin>> t;
    for(int i=2;i<=1e6;i++){
        __int128 nw=i*i;
        for(int j=2;;j++){
            nw*=i;
            if((nw-1)/(i-1)>1e18)break;
            else vis[(nw-1)/(i-1)]=1;
        }
    }
    while(t--)slove();
    return 0;
}