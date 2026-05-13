#include<bits/stdc++.h>
using namespace std;
long long n,t,x,y,a[500010],maxn,minn;
priority_queue<long long> que;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n>>t;
    while(t--)
    {
        cin>>x>>y;
        a[x]+=y;
        maxn=max(maxn,a[x]);
        minn=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            minn=min(minn,a[i]);
        }
        cout<<maxn-minn<<' ';
    }
    return 0;
}