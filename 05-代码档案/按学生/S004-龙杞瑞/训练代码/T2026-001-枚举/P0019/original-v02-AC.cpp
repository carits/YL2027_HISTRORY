#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,t,maxn,a[N];
signed main(){
    cin>>n>>t;
    for(int i=1;i<=n;i++) cin>>a[i]; 
    for(int i=1,j=n;i<j;){
        if(a[i]+a[j]>t) j--;
        else if(a[i]+a[j]<=t){
            maxn=max(maxn,a[i]+a[j]);
            i++;
        } 
    }
    cout<<maxn;
    return 0;
}