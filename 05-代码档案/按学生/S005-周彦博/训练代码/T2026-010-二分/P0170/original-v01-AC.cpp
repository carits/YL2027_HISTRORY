#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int n, m, a[100005], b;
int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){cin >> a[i];mp[a[i]]++;}
    for (int i = 1; i <= m; i++){cin >> b;mp[b]++;}
    for (int i = 1; i <= n; i++){if (mp[a[i]] == 2)cout << a[i] << " ";}
    return 0;
}