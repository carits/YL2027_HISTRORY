#include<bits/stdc++.h>
using namespace std;
int n, m;
map<int, bool> mp;
int a[100005], b[100005];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i], mp[b[i]] = true;
    for (int i = 1; i <= n; i++)
        if (mp[a[i]])
            cout << a[i] << " ";
    return 0;
}