#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,ans=1e9;
int const N=1e6+5;
int a[N];
bool check(int step){
    int sum=step;
    for(int i=1;i<=n;i++){
        sum+=a[i];
        if(sum<=0)return 0;
    }
    ans=step;
    return 1;
}
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i];
    int l=1,r=1e9;
    while(l<=r){
        int mid=(l+r)>>1;
        // cout<< l << " " << r << "\n";
        if(check(mid))r=mid-1;
        else l=mid+1;
    }
    cout<< ans;
    return 0;
}