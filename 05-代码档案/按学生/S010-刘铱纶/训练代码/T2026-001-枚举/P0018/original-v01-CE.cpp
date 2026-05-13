#include<bits/stdc++.h>
using namespace std;
long long n,a[5005],pre[5005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pre[i]=pre[i-1]+a[i];
    }
    int ans=-1e9;
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
            ans=max(pre[j]-pre[i-1],ans);
    cout<<ans;
    return 0;
}