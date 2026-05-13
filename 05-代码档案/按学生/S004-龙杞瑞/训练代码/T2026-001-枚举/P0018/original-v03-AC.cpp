#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e3+5;
int n,maxn,sum,a[N];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i]; 
    for(int i=1;i<=n;i++){
       a[i]=a[i-1]+a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            maxn=max(maxn,a[j]-a[i-1]);
        }
    }
    cout<<maxn;
    return 0;
}