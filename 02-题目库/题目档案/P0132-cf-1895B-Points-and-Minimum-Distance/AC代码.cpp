#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int>a(2*n);
        for(int &x:a) cin>>x;
        sort(a.begin(),a.end());
        int ans=(a[n-1]-a[0])+(a[2*n-1]-a[n]);
        cout<<ans<<'\n';
        for(int i=0;i<n;i++) cout<<a[i]<<' '<<a[i+n]<<'\n';
    }
    return 0;
}
