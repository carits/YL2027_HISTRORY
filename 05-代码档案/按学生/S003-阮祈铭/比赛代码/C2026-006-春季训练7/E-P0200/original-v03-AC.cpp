#include<bits/stdc++.h>
using namespace std;
int a[10000110],p[1000110],cnt=1;
int t,n,x;
map<int,int> mp;
int main()
{
    a[0]=a[1]=1;
    for(int i=2;i<=1e7+100;i++)
    {
        if(a[i]==0)
        {
            p[cnt]=i;
            cnt++;
            for(int j=i+i;j<=1e7+100;j+=i)
            {
                a[j]=1;
            }
        }
    }
    cin>>t;
    while(t--)
    {
        int ans=0,cntx=0;
        mp.clear();
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            for(int j=1;p[j]<=x && x>0 && a[x];j++)
            {
                while(x>0 && x%p[j]==0 && a[x])
                {
                    mp[p[j]]++;
                    x/=p[j];
                }
            }
            if(x>1)
            {
                mp[x]++;
            }
        }
        for(auto v:mp)
        {
            ans+=v.second/2;
            if(v.second%2!=0)
            {
                cntx++;
            }
        }
        ans+=cntx/3;
        cout<<ans<<endl;
    }
    return 0;
}