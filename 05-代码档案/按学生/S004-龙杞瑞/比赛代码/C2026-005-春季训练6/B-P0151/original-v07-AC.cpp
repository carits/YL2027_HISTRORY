#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,cnt,maxn,a[N],pre[N];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i==1) continue; 
        if(a[i]<=a[i-1]*2){
            cnt++;
            maxn=max(maxn,cnt);
        }else cnt=0;
    }
    cout<<maxn+1;
    return 0;
 }