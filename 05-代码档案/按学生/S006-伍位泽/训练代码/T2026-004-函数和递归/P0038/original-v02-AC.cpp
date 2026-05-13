#include <bits/stdc++.h>
using namespace std;
bool zs (int n)
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
int fan (int n)
{
    int m=0;
    while (n!=0)
    {
        m=m*10+n%10;
        n/=10;
    }
    return m;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m , n;
    cin >> m >> n;
    int cnt1=0 , cnt2=0;
    for (int i=m;i<=n;i++)
    {
        if (zs(i)==1&&zs(fan (i))==1)
        {
            cnt1++;
        }
    }
    if (cnt1==0)
    {
        cout << "No";
        return 0;
    }
    for (int i=m;i<=n;i++)
    {
        if (zs(i)==1&&zs(fan (i))==1)
        {
            cnt2++;
            if (cnt1>cnt2)
            {
                cout << i << ",";
            }
            else
            {
                cout << i;
            }
        }
    }
    return 0;
}