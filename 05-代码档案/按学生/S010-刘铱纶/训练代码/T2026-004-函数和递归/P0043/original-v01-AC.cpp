#include<bits/stdc++.h>

using namespace std;

int n, m, q;
string s, t;

int main()
{
    cin >> n >> m >> q;
    cin >> s >> t;
    
    int l, r;
    while(q--)
    {
        cin >> l >> r;
        string p = s.substr(l - 1, r - l + 1);
        int last = p.find(t, 0), cnt = 0;
        while(last != -1)
        {
            last = p.find(t, last + 1);
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}