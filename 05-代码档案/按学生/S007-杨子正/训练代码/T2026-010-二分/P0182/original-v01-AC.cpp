#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        s += s;
        int ans = -1, in = 1e9;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
                in = min(in, i);
            if (s[i] == 'g')
            {
                ans = max(ans, i - in);
                in = 1e9;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}