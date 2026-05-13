#include<bits/stdc++.h>
using namespace std;
int n,k;
bool vis[10005];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j%i==0)
            {
                if(vis[j]==0)
                    vis[j]=1;
                else
                    vis[j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==1)
            cout<<i<<" ";
    }
    return 0;
}