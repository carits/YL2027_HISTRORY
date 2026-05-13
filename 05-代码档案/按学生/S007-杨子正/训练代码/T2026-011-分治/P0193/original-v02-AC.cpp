#include <bits/stdc++.h>
using namespace std;
string dfs(string s)
{
    if (s.size() % 2 != 0)
        return s;
    string s1 = dfs(s.substr(0, s.size() / 2));
    string s2 = dfs(s.substr(s.size() / 2));
    if (s1 < s2)
        return s1 + s2;
    else
        return s2 + s1;
}
int main()
{
    string a, b;
    cin >> a >> b;
    if (dfs(a) == dfs(b))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}