#include <bits/stdc++.h>
using namespace std;
int zs (int n)
{
    if (n<=1) return 0;
    for (int i=2;i<=sqrt (n);i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main ( )
{
    ios::sync_wiht_stdio(0);
    cin.tie(0);
    int m , n;
    cin >> m >> n;
    int x , y=0;
    for (int i=m;i<=n;i++)
    {
        x=i;
        while (x!=0)
        {
            y=y*10+x%10;
            x/=10;    
        }
        if (zs (i)==1)&&zs (y)==1)
        {
            cout << i << " ";
        }
    }
    return 0;
}