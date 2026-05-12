#include <bits/stdc++.h>
using namespace std;

struct BIT{
    int n; vector<int> c;
    BIT(int n=0):n(n),c(n+1,0){}
    void add(int x,int v){ for(;x<=n;x+=x&-x) c[x]+=v; }
    long long sum(int x){ long long r=0; for(;x;x-=x&-x) r+=c[x]; return r; }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<long long>a(n),b;
    for(auto &x:a) cin >> x, b.push_back(x);
    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    BIT bit((int)b.size());
    long long ans=0;
    for(int i=n-1;i>=0;i--){
        int rk=lower_bound(b.begin(),b.end(),a[i])-b.begin()+1;
        ans += bit.sum(rk-1);
        bit.add(rk,1);
    }
    cout << ans << '\n';
    return 0;
}
