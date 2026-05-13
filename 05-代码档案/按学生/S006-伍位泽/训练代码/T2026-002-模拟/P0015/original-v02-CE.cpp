#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , s , m;
    cin >> n >> s >> m;
    for (int i=1;i<=n;i++)
    {
        b[i]=i;
    }
    int cnt=0 , v=0; 
    while (n--)
    {
        v=(v+s)%n;
        cout << a[v] << " ";
        for (int i=v;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
    } 
    return 0;
}