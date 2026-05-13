#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
	cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if(n%2!=0) cout<<0<<'\n';
        else cout<<(n/4)+1<<'\n';
    }
}
int main() {
    solve();
    return 0;
}