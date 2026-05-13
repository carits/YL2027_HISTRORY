#include<bits/stdc++.h>
using namespace std;
int t,n;
int b[50];
int cnt;
void dfs(int x,string ans,int a1,int a2)
{
    if(x==n)
    {
        if(cnt<n)
        {
            cout<<ans<<endl;
            cnt++;
        }
        return;
    }
    if(cnt<n)
    {
        for(int i=1;i<=n;i++)
        {
            if(b[i]==0)
            {
                if(x>=2 && a1+a2==i)
                {
                    continue;
                }
                b[i]=1;
                dfs(x+1,ans+to_string(i)+" ",a2,i);
                b[i]=0;
            }
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        dfs(0,"",0,0);
    }
    return 0;
}