#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int t, n, p[N];
void init(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> p[i];
}
void print(){
    for(int i = 2; i < n; i++)
        cout << p[i] << ' ';
    cout << p[n] << ' ' << p[1] << '\n';
}
void solve(){
    init();
    print();
}
int main(){
    cin >> t;
    while(t--) solve();
    return 0;
}