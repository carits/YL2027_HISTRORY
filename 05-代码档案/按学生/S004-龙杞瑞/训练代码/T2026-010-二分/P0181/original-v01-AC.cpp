#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int k,q,n,a[N];
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while (t--) {
        cin>>k>>q;
        for(int i=1;i<=k;i++) cin>>a[i];
        while(q--){
            cin>>n;
            int now=n;
            while(1){
                int cnt=0;
                for (int i=1;i<=k;i++) if(a[i]<=now) cnt++;
                if(cnt==0) break;
                now-=cnt;
            }
            cout<<now<<" ";
        }
        cout<<"\n";
    }
    return 0;
}