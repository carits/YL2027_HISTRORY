#include<bits/stdc++.h>
using namespace std;
int t,n,k,d,a[2010],v[100010],maxn,ans,tmp;
int main()
{
    cin>>t;
    while(t--)
    {
        maxn=0,ans=0,tmp=0;
        cin>>n>>k>>d;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }
        if(d==1)
        {
            int cnt=0;
            for(int j=1;j<=n;j++)
            {
                if(a[j]==j)
                {
                    cnt++;
                }
            }
            cout<<cnt<<endl;
            continue;
        }
        for(int i=0;i<=min(d-1,n*2);i++)
        {
            int cnt=0;
            for(int j=1;j<=n;j++)
            {
                if(a[j]==j)
                {
                    cnt++;
                }
                if(j<=v[i%k])
                {
                    a[j]++;
                }
            }
            if(cnt>=maxn)
            {
                maxn=cnt;
                tmp=i+1;
            }
        }
        ans=maxn+(d-tmp)/2;
        cout<<ans<<endl;
    }
    return 0;
}