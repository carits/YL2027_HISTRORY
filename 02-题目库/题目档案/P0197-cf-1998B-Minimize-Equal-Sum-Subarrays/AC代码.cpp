#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int>p(n);
        for(int &x:p) cin>>x;
        if(n==1){ cout<<p[0]<<'\n'; continue; }
        for(int i=1;i<n;i++) cout<<p[i]<<' ';
        cout<<p[0]<<'\n';
    }
    return 0;
}
