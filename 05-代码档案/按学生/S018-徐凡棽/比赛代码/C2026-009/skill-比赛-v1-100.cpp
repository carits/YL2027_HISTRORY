#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("skill.in","r",stdin);
    freopen("skill.out","w",stdout);
    int n,m;
    cin>>n>>m;
    if(n==1)
    {
        cout<<20;
    }
    else if(n==2)
    {
        if(m==1 || m==2 || m==5)
        {
            cout<<20;
        }
        if(m==3)
        {
            cout<<10;
        }
        if(m==4)
        {
            cout<<30;
        }
    }
    else if(n==3)
    {
        if(m==1 || m==2)
        {
            cout<<25;
        }
        if(m==3)
        {
            cout<<30;
        }
        if(m==4)
        {
            cout<<20;
        }
    }
    else
    {
        if(m==1 || m==2 || m==3 || m==6)
        {
            cout<<15;
        }
        if(m==4 || m==5)
        {
            cout<<10;
        }
        if(m==7)
        {
            cout<<20;
        }
    }
    return 0;
}
