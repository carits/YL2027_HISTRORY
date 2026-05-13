#include <bits/stdc++.h>
using namespace std;
bool check(const string & x, const string & s)
{
    bool vis[26] = {false};
    for (char c : x)
        vis[c - 'a'] = true;
    for (char c : s)
        if (!vis[c - 'a'])
            return false;
    return true;
}
int solve()
{
    int n, m;
    string x, s;
    cin >> n >> m >> x >> s;
    if (!check(x, s))
        return -1;
    int cnt = 0;
    while (true)
    {
        if (x.find(s) != string::npos)
            return cnt;
        if (x.size() > m + n)
            return -1;
        x += x;
        cnt++;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        cout << solve() << "\n";
    return 0;
}