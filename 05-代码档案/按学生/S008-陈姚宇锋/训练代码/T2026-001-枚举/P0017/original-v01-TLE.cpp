#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int vis1[100009];
int vis2[100009];
int vis3[100009]; 
signed main()
{
    int minn=INT_MAX;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=n;++j)
        {
            for(int k=0;k<=n;++k)
            {
                if(i*a+j*b+k*c==n)
                {
                    minn=min(minn,i+j+k);            
                }
            }
        }
    }
    cout<<minn;
    return 0;
}