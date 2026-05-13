#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
signed main()
{
    freopen("skill.in","r",stdin);
    freopen("skill.out","w",stdout);
    cin >> n >> m;
    if(n==1)
    {
        cout << 20;
    }
    if(n==2)
    {
        if(m<=2||m==5)
        {
            cout << 20;
        }
        if(m==3)
        {
            cout << 10;
        }
        if(m==4)
        {
            cout << 30;
        }
    }
    if(n==3)
    {
        if(m<=2)
        {
            cout << 25;
        }
        if(m==3)
        {
            cout << 30;
        }
        if(m==4)
        {
            cout << 20;
        }
    }
    if(n==4)
    {
        if(m<=3||m==6)
        {
            cout << 15;
        }
        if(m==4||m==5)
        {
            cout << 10;
        }
        if(m==7)
        {
            cout << 20;
        }
    }
    return 0;
}
