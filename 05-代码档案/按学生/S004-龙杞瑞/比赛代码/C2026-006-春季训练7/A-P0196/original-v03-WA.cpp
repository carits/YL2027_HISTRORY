#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e3+5;
int t,n,cnt,a[N];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++) a[i]=i;
        for(int i=2;i<=n;i++){
            for(int j=i;j<=n;j++){
                cout<<a[j]<<" ";
            }
            for(int j=1;j<i;j++) cout<<a[j]<<" ";
            cout<<'\n';
        }
        for(int i=n;i>=1;i--) cout<<a[i]<<" ";
        cout<<'\n'; 
    }
    return 0;
}