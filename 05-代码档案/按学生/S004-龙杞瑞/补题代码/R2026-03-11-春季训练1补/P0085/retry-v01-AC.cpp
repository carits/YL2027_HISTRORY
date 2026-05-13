#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[100005];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        int cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<n;i++){
            if(a[i]>a[i+1]) cnt++;
        }
        if(cnt==0) cout<<n<<'\n';
        else cout<<1<<'\n';
    }
    
    return 0;
}