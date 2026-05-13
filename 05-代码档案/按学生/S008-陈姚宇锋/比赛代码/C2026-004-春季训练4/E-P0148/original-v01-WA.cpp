#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1000009];
int sum[1000009];
int minn=INT_MAX;
signed main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }   
    sort(a+1,a+1+n); 
    int minn=INT_MAX;
    for(int i=1;i<=n-k+1;++i)
    {
        int ans=0;
        for(int j=i+1;j<=i+k-1;++j)
        {
            int w=a[j];
            int num=0;
            int flag=0;
            while(w)
            {
                if(w==a[i])
                {
                    flag=1;
                    break;
                }
                num++;
                w/=2;
                if(w<a[i])
                {
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
            ans+=num;
            if(j==i+k-1)
            {
                minn=min(minn,ans);
            }
        }
    }
    cout<<minn;
    return 0;
}