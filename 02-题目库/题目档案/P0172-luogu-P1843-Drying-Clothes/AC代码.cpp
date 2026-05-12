#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long a,b; cin>>n>>a>>b;
    vector<long long>w(n); long long mx=0;
    for(auto &x:w){ cin>>x; mx=max(mx,x); }
    auto ok=[&](long long t){
        long long need=0;
        for(long long x:w){
            long long rem=x-a*t;
            if(rem>0){
                need += (rem+b-1)/b;
                if(need>t) return false;
            }
        }
        return need<=t;
    };
    long long l=0,r=(mx+a-1)/a;
    while(l<r){
        long long mid=(l+r)/2;
        if(ok(mid)) r=mid; else l=mid+1;
    }
    cout<<l<<'\n';
    return 0;
}
