#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<long long>a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        if(n==1){ cout<<0<<'\n'; continue; }
        vector<pair<int,int>> ops;
        ops.push_back({1,n});
        if((a[1]+a[n])&1) a[n]=a[1];
        else a[1]=a[n];
        for(int i=2;i<n;i++){
            if((a[1]+a[i])&1){
                ops.push_back({1,i});
                a[i]=a[1];
            }else{
                ops.push_back({i,n});
                a[i]=a[n];
            }
        }
        cout<<ops.size()<<'\n';
        for(auto [l,r]:ops) cout<<l<<' '<<r<<'\n';
    }
    return 0;
}
