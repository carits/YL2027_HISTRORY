#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,sum=1,maxn=1,a[N],pre[N];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<=a[sum]*2) maxn=max(maxn,i-sum+1);
        else sum++;
    }
    cout<<maxn;
    return 0;
}