#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        int x = 0, y = 0, n;
        bool flag = false;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                x--;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'U')
                y++;
            else 
                y--;
            if (x == 1 && y == 1)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}