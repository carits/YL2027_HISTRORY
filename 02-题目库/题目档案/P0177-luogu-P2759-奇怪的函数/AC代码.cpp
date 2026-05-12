#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long l=1,r=2000000000LL;
    auto ok=[&](long long x){
        long double v=(long double)x*log10((long double)x)+1.0L;
        return v+1e-12>=n;
    };
    while(l<r){
        long long mid=(l+r)/2;
        if(ok(mid)) r=mid;
        else l=mid+1;
    }
    cout << l << '\n';
    return 0;
}
