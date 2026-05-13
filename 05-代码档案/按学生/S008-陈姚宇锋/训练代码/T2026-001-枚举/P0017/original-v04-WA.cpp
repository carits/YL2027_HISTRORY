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
    for(int i=0;i<=n/a;++i)
    {
        for(int j=0;j<=n/b;++j)
        {
            if((n-i*a-j*b)%c==0)
            {
                minn=min(minn,i+j+(n-i*a-j*b)/c);            
            }
        }
    }
    cout<<minn;
    return 0;
}