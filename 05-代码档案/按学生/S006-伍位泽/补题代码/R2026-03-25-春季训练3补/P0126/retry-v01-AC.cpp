#include <bits/stdc++.h>
using namespace std;
string s;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        bool p=0;
        int a=0 , b=0;
        if (s[0]>='2'||s[s.size ( )-1]=='9')
        {
            p=1;
        }
        for (int i=s.size ( )-2;i>=0;i--)
        {
            if (s[i]=='0')
            {
                p=1;
                break;
            }
        }
        if (p==0)
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