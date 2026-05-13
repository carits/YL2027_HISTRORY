#include <bits/stdc++.h>
using namespace std;

bool t[100005];
long long sum[100005];

int main()
{
    freopen("plan.in","r",stdin);
    freopen("plan.out","w",stdout);
    long long n,m,k,maxn=0;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        for(int j=1;j<=x;j++)
        {
            int y;
            cin>>y;
            if(y==1)
            {
                t[i]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(t[i]==0)
        {
            sum[i]=sum[i-1]+1;
        }
        else
        {
            sum[i]=sum[i-1];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int num=sum[j]-sum[i-1];
            int tot=(j-i+1-num)*num;
            if(tot<k)
            {
                maxn=max(maxn,j-i+1);
            }
        }
    }
    cout<<maxn;
    return 0;
}
