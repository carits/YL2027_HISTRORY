#include <bits/stdc++.h>
using namespace std;
bool check(char c)
{
    return c == 'a' || c == 'o' || c == 'e' || c == 'i' || c == 'u' || c == 'v';
}
void work(string s, string &sheng, string &yun)
{
    int pos = -1;
    for (int i = 0; i < s.size(); i++)
        if (check(s[i]))
        {
            pos = i;
            break;
        }
    if (pos == -1)
    {
        yun = s;
        sheng = "";
    } else
    {
        yun = s.substr(pos);
        sheng = s.substr(0, pos);
        if (pos == 0)
            sheng = "";
    }
}
signed main()
{
    string a, b;
    cin >> a >> b;
    string as, ay;
    string bs, by;
    work(a, as, ay);
    work(b, bs, by);
    bool ss = (as == bs);
    bool sy = (ay == by);
    if (ss && sy) cout << "3";
    else if (ss) cout << "2";
    else if (sy) cout << "1";
    else cout << "0";
    return 0;
}