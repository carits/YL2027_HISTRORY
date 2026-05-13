#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 1e5+3;
int dx[10]={0,2,-2,2,-2,1,-1,1,-1};
int dy[10]={0,-1,-1,1,1,-2,-2,2,2};
int t,n,cnt;
int vis[1009][1009];
signed main()
{
    char a,b;
    int x,y;
    cin>>a>>x>>b>>y;
    int a1=(a-'a')+1;
    int b1=(b-'a')+1;
    for(int i=0;i<9;++i)
    {
        int xx=dx[i]+b1;
        int yy=dy[i]+y;
        if(xx>8 || xx<1 || yy>8 || yy<1)
        {
            continue;   
        }
        vis[xx][yy]=1;          
    }
    for(int i=1;i<=8;++i)
    {
        vis[i][x]=1;
        vis[a1][i]=1;
    }
    for(int i=1;i<=8;++i)
    {
        for(int j=1;j<=8;++j)
        {
            int flag=0;
            for(int k=0;k<9;++k)
            {
                int xx=dx[k]+i;
                int yy=dy[k]+j;
                if(xx>8 || xx<1 || yy>8 || yy<1)
                {
                    continue;   
                }
                if((xx==a1 && yy==x) || vis[i][j]==1)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                cnt++;
            }
        } 
    } 
    cout<<cnt;
    return 0;
}