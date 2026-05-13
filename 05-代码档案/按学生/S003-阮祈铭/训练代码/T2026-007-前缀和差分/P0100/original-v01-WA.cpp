#include<bits/stdc++.h>
using namespace std;
int n,p,m,x,minn=INT_MAX;
int c[5000010];
int main()
{
    cin>>n>>p;
    c[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        c[i]=m-c[i-1];
    }
    while(p--)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>m;
            c[i]+=m;
            c[i+1]-=m;
        }
    }
    for(int i=1;i<=n;i++)
    {
        x+=c[i];
        minn=min(minn,x);
    }
    cout<<minn;
    return 0;
}