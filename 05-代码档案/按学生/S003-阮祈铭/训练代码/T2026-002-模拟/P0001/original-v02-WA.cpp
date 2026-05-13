#include<bits/stdc++.h>
using namespace std;
long long m,n,a[10010],i,b[110],minn,j,maxn;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=m;i++)
        b[i]=a[i];
    for(i=m;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            if(b[j]<b[minn])
                minn=j;
        b[minn]+=a[i];
    }
    for(i=1;i<=m;i++)
        maxn=max(maxn,b[i]);
    cout<<maxn;
    return 0;
}