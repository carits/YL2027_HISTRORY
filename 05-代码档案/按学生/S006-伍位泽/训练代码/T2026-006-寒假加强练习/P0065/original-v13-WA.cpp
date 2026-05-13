#include <bits/stdc++.h>
using namespace std;
int t , n;
int p[200005] , v[200005];
void sss (int a , int b)
{
    for (int i=1;i<=a-1;i++)
    {
        v[i]=p[i];
    }
    for (int i=b;i>=a;i--)
    {
        v[a+b-i]=p[i];
    }
    for (int i=b+1;i<=n;i++)
    {
        v[i]=p[i];
    }
    for (int i=1;i<=n;i++)
    {
        if (v[i]>p[i])
        {
            for (int j=1;j<=n;j++)
            {
                p[j]=v[j];
            }
            return;
        }
    }
    return;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=1;i<=n;i++)
        {
            cin >> p[i];
        }
        for (int i=1;i<=n;i++)
        {
            for (int j=i;j<=n;j++)
            {
                sss (i , j);
            }
        }
        for (int i=1;i<=n;i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}