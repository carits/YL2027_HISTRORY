 #include<bits/stdc++.h>
using namespace std;
long long n,t,a[100010],i,j,maxn=INT_MIN;
int main()
{
    cin>>n>>t;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n&&a[i]+a[j]<=t;j++)
            maxn=max(maxn,a[i]+a[j]);
    }
    cout<<maxn;
    return 0;
}