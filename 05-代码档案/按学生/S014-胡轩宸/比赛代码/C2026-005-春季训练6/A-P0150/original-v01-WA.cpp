#include<bits/stdc++.h>
using namespace std;
int T,n,a[20020],sum[20020];
int ssss()
{
    int minx=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        if(sum[i]%n==0)
        {
            minx=i;
            break;
        }
    }
    if(minx==INT_MAX)
    {
        return -1;
    }
    else
    {
        return minx;
    }
}
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n;
        bool f=1;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum[i]=sum[i-1]+a[i];
        }
        sort(a+1,a+n+1);
        for(int i=2;i<=n;i++)
        {
            if(a[i]!=a[i-1])
            {
                f=0;
            }
        }
        if(f==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int minn=ssss();
        cout<<minn<<endl;
    }
}
