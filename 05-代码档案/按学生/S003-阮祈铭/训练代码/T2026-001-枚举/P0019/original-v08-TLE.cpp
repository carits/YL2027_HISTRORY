 #include<bits/stdc++.h>
using namespace std;
long long n,t,a[100010],i,j,maxn=INT_MIN;
int main()
{
    cin>>n>>t;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    if(a[1]+a[2]>t)
    {
        cout<<0;
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n&&a[i]+a[j]<=t;j++)
            maxn=max(maxn,a[i]+a[j]);
    }
    printf("%d",maxn);
    return 0;
}