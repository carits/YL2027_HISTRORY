#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("plan.in","r",stdin);
    freopen("plan.out","w",stdout);
    priority_queue<int,vector<int>,greater<int> > q;
    int n,m,k,ans=0,maxx=INT_MAX;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        int f=0;
        int s,g[20];cin>>s;
        for(int i=1;i<=s;i++)
        {
            cin>>g[i];
        }
        if(q.size()==0)
        {
            q.push(s);
        }
        else
        {
            if(k>ans-s)
            {
                q.push(s);
                ans++;
            }
            else
            {
                q.push(s);
                q.pop();
            }
        }
        
    }cout<<ans;
    return 0;
}
