#include <bits/stdc++.h>
using namespace std;
string maxn , s;
string to_ (int a , int b)
{
    string t="";
    t+=s.substr (0 , a);
    for (int i=b;i>=a;i--)
    {
        t+=s[i];
    }
    t+=s.substr (b+1 , s.size ( )-b-1);
    return t;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n;
    cin >> t;
    char x;
    while (t--)
    {
        cin >> n;
        s="";
        for (int i=1;i<=n;i++)
        {
            cin >> x;
            s+=x;
        }
        maxn=s;
        for (int i=0;i<=n-1;i++)
        {
            for (int j=i;j<=n-1;j++)
            {
                maxn=max (maxn , to_ (i , j));
            }
        }
        for (int i=0;i<=maxn.size ( )-1;i++)
        {
            cout << maxn[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}