#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int t,n,a[N];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        if(n==1){
            cout<<a[1]<<'\n';
            continue;
        }
        if(n==2){
            cout<<a[2]<<' '<<a[1]<<'\n';
            continue;
        }
        for(int i=2;i<=n;i++) cout<<a[i]<<" ";
        cout<<a[1]<<'\n'; 
    }
    return 0;
}