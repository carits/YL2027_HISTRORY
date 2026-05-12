#include <bits/stdc++.h>
using namespace std;

vector<long long> pos;
long long A,B;
long long solve(long long l,long long r){
    auto it1=lower_bound(pos.begin(),pos.end(),l);
    auto it2=upper_bound(pos.begin(),pos.end(),r);
    long long cnt=it2-it1;
    if(cnt==0) return A;
    long long cost=B*cnt*(r-l+1);
    if(l==r) return cost;
    long long m=(l+r)/2;
    return min(cost, solve(l,m)+solve(m+1,r));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin >> n >> k >> A >> B;
    pos.resize(k);
    for(auto &x:pos) cin >> x;
    sort(pos.begin(),pos.end());
    cout << solve(1,1LL<<n) << '\n';
    return 0;
}
