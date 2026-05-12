#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b,p;
    cin >> a >> b >> p;
    long long oa=a, ob=b;
    long long ans=1%p, base=a%p;
    while(b){
        if(b&1) ans=ans*base%p;
        base=base*base%p;
        b>>=1;
    }
    cout << oa << '^' << ob << " mod " << p << '=' << ans << '\n';
    return 0;
}
