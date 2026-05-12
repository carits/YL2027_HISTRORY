#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int>a(n);
        for(int &x:a) cin >> x;
        bool allsame=true;
        for(int x:a) if(x!=a[0]) allsame=false;
        if(allsame){ cout << 0 << '\n'; continue; }
        if(*min_element(a.begin(),a.end())==1){ cout << -1 << '\n'; continue; }
        vector<pair<int,int>> ops;
        for(int step=0;step<30*n;step++){
            int mn=min_element(a.begin(),a.end())-a.begin();
            bool ok=true;
            for(int x:a) if(x!=a[mn]) ok=false;
            if(ok) break;
            for(int i=0;i<n;i++){
                if(i==mn || a[i]==a[mn]) continue;
                ops.push_back({i+1,mn+1});
                a[i]=(a[i]+a[mn]-1)/a[mn];
                break;
            }
        }
        bool ok=true;
        for(int x:a) if(x!=a[0]) ok=false;
        if(!ok || (int)ops.size()>30*n){ cout << -1 << '\n'; continue; }
        cout << ops.size() << '\n';
        for(auto [i,j]:ops) cout << i << ' ' << j << '\n';
    }
    return 0;
}
