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
        if (s[s.size ( )-1]=='9'||s[0]>='4')
        {
            p=1;
        }
        for (int i=s.size ( )-2;i>=1;i--)
        {
            int k=i;
            if (s[k]=='0')
            {
                while (s[k]=='0')
                {
                    s[k]='9';
                    k++;
                }
            }
            s[k]=char (s[k]-1);
            if (s[i]=='9')
            {
                p=1;
                break;
            }
        }
        while (s[0]=='0')
        {
            s=s.substr (1 , s.size ( )-1);
        }
        if (s[0]=='9')
        {
            p=1;
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