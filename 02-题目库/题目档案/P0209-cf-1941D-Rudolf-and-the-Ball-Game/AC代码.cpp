#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin>>T;
    while(T--){
        int n,m,x; cin>>n>>m>>x; --x;
        vector<int> cur(n), nxt(n); cur[x]=1;
        while(m--){
            int r; char c; cin>>r>>c;
            fill(nxt.begin(),nxt.end(),0);
            for(int i=0;i<n;i++) if(cur[i]){
                if(c=='0' || c=='?') nxt[(i+r)%n]=1;
                if(c=='1' || c=='?') nxt[(i-r%n+n)%n]=1;
            }
            cur.swap(nxt);
        }
        vector<int> ans;
        for(int i=0;i<n;i++) if(cur[i]) ans.push_back(i+1);
        cout<<ans.size()<<'\n';
        for(int x:ans) cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}
