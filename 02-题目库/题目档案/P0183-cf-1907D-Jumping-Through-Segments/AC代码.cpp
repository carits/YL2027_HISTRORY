#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<pair<long long,long long>> seg(n);
        for(auto &p:seg) cin >> p.first >> p.second;
        auto ok=[&](long long k){
            long long L=0,R=0;
            for(auto [l,r]:seg){
                L-=k; R+=k;
                L=max(L,l); R=min(R,r);
                if(L>R) return false;
            }
            return true;
        };
        long long l=0,r=1000000000LL;
        while(l<r){
            long long mid=(l+r)/2;
            if(ok(mid)) r=mid;
            else l=mid+1;
        }
        cout << l << '\n';
    }
    return 0;
}
