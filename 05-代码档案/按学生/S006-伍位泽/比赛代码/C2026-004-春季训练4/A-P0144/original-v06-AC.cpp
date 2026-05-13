#include <bits/stdc++.h>
using namespace std;
string s;
int a[200005][27];
int t , n;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        s=" "+s;
        bool m=0;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=26;j++)
            {
                a[i][j]=a[i-1][j];
            }
            a[i][s[i]-'a'+1]++;
        }
        for (int i=2;i<=n-1;i++)
        {
            int p=s[i]-'a'+1;
            if (a[n][p]-a[i][p]+a[i-1][p]>=1)
            {
                m=1;
                break;
            }    
        }
        if (m==0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}