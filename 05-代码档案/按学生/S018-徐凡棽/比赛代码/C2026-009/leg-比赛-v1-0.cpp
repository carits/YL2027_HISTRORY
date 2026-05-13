#include <bits/stdc++.h>
using namespace std;

long long n,m,a,b,c,d,minn=INT_MAX,sum=0;

void dfs(int x,int y)
{
    if(x==n && y==m)
    {
        minn=min(minn,sum);
        return ;
    }
    if((x+y)%2==0 && x<n)
    {
        sum+=a;
        dfs(x+1,y);
        sum-=a;
    }
    if((x+y)%2==0 && y<m)
    {
        sum+=b;
        dfs(x,y+1);
        sum-=b;
    }
    if((x+y)%2==1 && x<n)
    {
        sum+=c;
        dfs(x+1,y);
        sum-=c;
    }
    if((x+y)%2==1 && y<m)
    {
        sum+=d;
        dfs(x+1,y);
        sum-=d;
    }
}

int main()
{
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    cin>>n>>m>>a>>b>>c>>d;
    dfs(0,0);
    cout<<minn;
    return 0;
}
