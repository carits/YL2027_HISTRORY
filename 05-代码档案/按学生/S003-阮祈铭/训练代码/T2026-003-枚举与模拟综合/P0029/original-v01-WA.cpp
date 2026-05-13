#include<bits/stdc++.h>
using namespace std;
map<long long,int> mp;
int main()
{
    int n,i,a[1010],maxn,cnt,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            mp[a[i]+a[j]]++;
            maxn=max(maxn,mp[a[i]+a[j]]);
        }
    }
    cout<<maxn;
    return 0;
}