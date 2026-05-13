#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e3+5;
int n,maxn,sum,a[N];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=0,j=0;i<=n;i++){
        sum-=a[i];
        maxn=max(maxn,sum);
        if(j==n) continue;
        while(j<n){
            sum+=a[++j];
            maxn=max(maxn,sum);
        }
    }
    cout<<maxn;
    return 0;
}