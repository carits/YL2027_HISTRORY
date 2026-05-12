#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> primes;
    vector<bool> is(4000,true);
    for(int i=2;i<4000;i++) if(is[i]){
        primes.push_back(i);
        if(1LL*i*i<4000) for(long long j=1LL*i*i;j<4000;j+=i) is[j]=false;
    }
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        map<int,int> cnt;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            for(int p:primes){
                if(1LL*p*p>x) break;
                while(x%p==0){ cnt[p]++; x/=p; }
            }
            if(x>1) cnt[x]++;
        }
        int ans=0, rem=0;
        for(auto [p,c]:cnt){
            ans += c/2;
            rem += c%2;
        }
        ans += rem/3;
        cout << ans << '\n';
    }
    return 0;
}
