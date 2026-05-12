#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        long long mn=0,mx=0;
        for(int i=0;i<n;i++){
            long long a; cin>>a;
            long long x1=mn+a, x2=mx+a;
            long long nmn=min({x1,x2,llabs(x1),llabs(x2)});
            long long nmx=max({x1,x2,llabs(x1),llabs(x2)});
            mn=nmn; mx=nmx;
        }
        cout<<mx<<'\n';
    }
    return 0;
}
