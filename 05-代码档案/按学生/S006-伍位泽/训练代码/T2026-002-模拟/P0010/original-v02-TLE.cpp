#include <bits/stdc++.h>
    using namespace std;
     
    int main ( )
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n , x;
        cin >> n;
        while (n--)
        {
            int a=0 , b=0 , c;
            cin >> x;
            while (x--)
            {
                cin >> c;
            }
            if (c=='U') a++;
            if (c=='D') a--;
            if (c=='L') b++;
            if (c=='R') b--;
            if (a==1&&b==1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        return 0;
    }