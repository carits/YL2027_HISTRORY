#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        long long n,p,l,t;
        cin >> n >> p >> l >> t;
        long long tasks=(n+6)/7;
        auto score=[&](long long d){
            return d*l + min(2*d,tasks)*t;
        };
        long long lo=0,hi=n;
        while(lo<hi){
            long long mid=(lo+hi)/2;
            if(score(mid)>=p) hi=mid;
            else lo=mid+1;
        }
        cout << n-lo << '\n';
    }
    return 0;
}
