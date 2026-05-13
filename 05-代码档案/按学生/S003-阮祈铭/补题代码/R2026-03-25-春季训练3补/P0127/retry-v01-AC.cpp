#include<bits/stdc++.h>
using namespace std;
long long t,n,x,maxn[300010],minn[300010];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        maxn[1]=max(x,abs(x));
        minn[1]=min(x,abs(x));
        for(int i=2;i<=n;i++)
        {
            cin>>x;
            maxn[i]=max(maxn[i-1]+x, max(abs(maxn[i-1]+x),abs(minn[i-1]+x)) );
            minn[i]=min(minn[i-1]+x, min(abs(maxn[i-1]+x),abs(minn[i-1]+x)));
        }
        cout<<max(maxn[n],abs(minn[n]))<<endl;
    }
    return 0;
}