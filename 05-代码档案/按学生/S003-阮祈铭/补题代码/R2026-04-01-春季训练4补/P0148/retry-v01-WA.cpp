#include<bits/stdc++.h>
using namespace std;
const int kMaxN=60;
int n,k,ans=INT_MAX,sum;
int a[kMaxN];
map<int,priority_queue<int,vector<int>,greater<int> > > que;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        int x=a[i];
        for(int cnt=0;x>0;cnt++,x/=2)
        {
            que[x].push(cnt);
        }
    }
    for(auto i:que)
    {
        if(i.second.size()>k)
        {
            sum=0;
            int x=1;
            while(!i.second.empty() && x<=k)
            {
                sum+=i.second.top();
                i.second.pop();
                x++;
            }
            ans=min(ans,sum);
        }
    }
    cout<<ans;
    return 0;
}