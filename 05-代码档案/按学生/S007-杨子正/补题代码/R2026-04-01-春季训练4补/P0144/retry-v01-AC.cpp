#include <bits/stdc++.h>
using namespace std;
int vis[27];
bool solve()
{
    memset(vis, 0, sizeof vis);
    int n;
    string s;
    cin >> n;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; i++)
        vis[s[i] - 'a']++;
    for (int i = 1; i < l - 1; i++)
        if (vis[s[i] - 'a'] > 1)
            return true;
    return false;
}
int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        if (solve())
            cout << "Yes\n";
        else 
            cout << "No\n";//
    }
    return 0;
}