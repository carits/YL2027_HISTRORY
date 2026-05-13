#include <bits/stdc++.h>;
using namespace std;
string maxn="0" , s="" , v;
string to_ (string a);
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
        maxn="0" , s="";
        while (n--)
        {
            cin >> x;
            s+=x;
        }
        for (int i=0;i<=n-1;i++)
        {
            for (int j=i+1;j<=n-1;j++)
            {
                v.substr (i , j)=to_(v.substr(i , j));
                maxn=max (maxn , v);
                v=s;
            }
        }
    }
    return 0;
}