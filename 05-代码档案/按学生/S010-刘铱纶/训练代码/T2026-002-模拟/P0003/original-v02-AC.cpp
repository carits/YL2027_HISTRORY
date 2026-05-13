#include<bits/stdc++.h>
using namespace std;
int l,m;
bool vis[10005];
int main()
{
    cin>>l>>m;
    int x,y;
    while(m--)
    {
        cin>>x>>y;
        for(int i=x;i<=y;i++)
            vis[i]=true;
    }
    int cnt=0;
    for(int i=0;i<=l;i++)
        cnt+=vis[i];
    cout<<l-cnt+1;
    return 0;
}