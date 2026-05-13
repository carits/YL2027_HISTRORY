#include <bits/stdc++.h>
using namespace std;
#define int long long 
int a[1000009],diff[100009];
signed main() 
{
    int t;
    cin>>t;
    while(ta--)
    {
        int n;
        cin>>n;
        int x=-1;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            diff[i]=diff[i-1]+a[i];
        }
        int minn=0;
        for(int i=n;i>=0;i--)
        {
            if(diff[i]<minn)
            {
                minn=diff[i];
                x=i;
            }
        }
        if(x==-1)
        {
            cout<<diff[n]<<'\n';
        }
        else
        {
            int sum=0;
            for(int i=1;i<=n;i++)
            {
                if(i<=x)
                {
                    sum-=a[i];
                }
                else 
                {
                    sum+=a[i];
                }
            }
            cout<<sum<<'\n';
        }
    }
}