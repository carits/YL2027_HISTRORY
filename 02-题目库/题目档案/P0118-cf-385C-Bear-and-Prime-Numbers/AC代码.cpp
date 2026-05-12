#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin>>n;
    vector<int> xs(n);
    int mx=0;
    for(int &x:xs){ cin>>x; mx=max(mx,x); }
    vector<int> cnt(mx+1), val(mx+1), pref(mx+1), primes;
    for(int x:xs) cnt[x]++;
    vector<bool> isComp(mx+1,false);
    for(int i=2;i<=mx;i++){
        if(!isComp[i]) primes.push_back(i);
        for(int p:primes){
            long long v=1LL*i*p;
            if(v>mx) break;
            isComp[v]=true;
            if(i%p==0) break;
        }
    }
    for(int p:primes){
        int s=0;
        for(int j=p;j<=mx;j+=p) s += cnt[j];
        val[p]=s;
    }
    for(int i=1;i<=mx;i++) pref[i]=pref[i-1]+val[i];
    int m; cin>>m;
    while(m--){
        int l,r; cin>>l>>r;
        if(l>mx){ cout<<0<<'\n'; continue; }
        r=min(r,mx);
        cout<<pref[r]-pref[l-1]<<'\n';
    }
    return 0;
}
