#include <bits/stdc++.h>
using namespace std;
int a[10005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , s , m;
    cin >> n >> s >> m;
    for (int i=1;i<=n;i++)
    {
        a[i]=i;
    }
    int v=s;
    while (1)
    {
        v=(v+m-1)%n;
        if (n==1)
        {
            v=1;
        }
        if (v==0)
        {
            v=n;
        }
        cout << a[v] << " ";
        for (int i=v;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        if  (n==1)
        {
            break;
        }
    }
    cout << a[1];
    return 0;
}