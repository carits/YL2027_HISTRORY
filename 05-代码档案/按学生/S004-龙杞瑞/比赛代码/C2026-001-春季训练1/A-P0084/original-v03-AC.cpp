#include<bits/stdc++.h>
#define int long long
const int N=15;
int t,n,a[N];
using namespace std;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        int maxn=0,cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            maxn=max(maxn,a[i]);
        }
        for(int i=1;i<=n;i++) if(a[i]==maxn) cnt++;
        cout<<cnt<<'\n';
    }
    return 0;
}