#include <bits/stdc++.h>
using namespace std;
int t,n;
int pb(int x) {
    int p = 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            if (p && i != p) return -1;
            if (!p) p = i;
            while (x % i == 0) x /= i;
        }
    }
    if (x>1){
        if (p&&x!=p) return -1;
        if (!p) p=x;
    }
    if(p==0) return 1;
    return p;
}
bool sorted(const vector<int>& v) {
    for (size_t i = 1; i < v.size(); i++)if (v[i] < v[i-1]) return 0;
    return 1;
}
int minelem(const vector<int>& v) {
    int m = v[0];
    for (size_t i = 1; i < v.size(); i++) if(v[i] < m) m = v[i];
    return m;
}
void solve(){
    cin>>n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) b[i] = pb(a[i]);
    if(sorted(a)) cout<<"Bob\n";
    else if(minelem(b)==-1) cout<<"Alice\n";
    else if(sorted(b)) cout<<"Bob\n";
    else cout<<"Alice\n";
}
int main(){
    cin>>t;
    while (t--) solve();
    return 0;
}