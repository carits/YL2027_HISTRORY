#include <bits/stdc++.h>
using namespace std;

const int V=2750131;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    vector<int> spf(V+1), primes, idx(V+1);
    for(int i=2;i<=V;i++){
        if(!spf[i]){ spf[i]=i; primes.push_back(i); if((int)primes.size()<=200000) idx[i]=primes.size(); }
        for(int p:primes){
            long long v=1LL*p*i; if(v>V || p>spf[i]) break;
            spf[v]=p;
        }
    }
    int n; cin>>n;
    vector<int> b(2*n), cnt(V+1);
    for(int &x:b){ cin>>x; cnt[x]++; }
    sort(b.rbegin(), b.rend());
    vector<int> ans;
    for(int x:b){
        if(cnt[x]==0) continue;
        if(spf[x]==x){
            int y=idx[x];
            ans.push_back(y);
            cnt[x]--; cnt[y]--;
        }else{
            int y=x/spf[x];
            ans.push_back(x);
            cnt[x]--; cnt[y]--;
        }
        if((int)ans.size()==n) break;
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<(i+1==n?'\n':' ');
    return 0;
}
