#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e7+5,mod=1e9+7;
int n,k,x,y;
int a[N];
signed main(){
    cin>>n>>k>>x>>y;
    int now=1;
    for(int i=1;i<=n;i++){
        now=(now*x+y)%mod;
        a[i]=now;
    }
    sort(a+1,a+n+1);
    cout<<a[k];
    return 0;
}