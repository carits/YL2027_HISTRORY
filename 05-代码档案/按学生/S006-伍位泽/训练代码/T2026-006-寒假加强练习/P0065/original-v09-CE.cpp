#include <bits/stdc++.h>
using namespace std;
string maxn , s , v;
string to_ (string a)
{
    string b="";
    for (int i=a.size ( )-1;i>=0;i--)
    {
        b+=a[i];
    }
    return b;
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
                v=s;
                v.substr(i , j)=to_(v.substr(i , j));
                maxn=max (maxn , v);
            
        }
        for (int i=0;i<=maxn.size ( )-1;i++)
        {
            cout << maxn[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}