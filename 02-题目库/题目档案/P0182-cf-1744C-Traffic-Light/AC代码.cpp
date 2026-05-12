#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        int n; char c; string s;
        cin >> n >> c >> s;
        if(c=='g'){
            cout << 0 << '\n';
            continue;
        }
        string t=s+s;
        int nxt=-1,ans=0;
        for(int i=2*n-1;i>=0;i--){
            if(t[i]=='g') nxt=i;
            if(i<n && t[i]==c) ans=max(ans,nxt-i);
        }
        cout << ans << '\n';
    }
    return 0;
}
