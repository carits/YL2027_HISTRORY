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
    j=n;
    for(i=1;i<=n;i++)
    {
        while(j>i&&a[j]+a[i]>t)
            j--;
        if(i<j)
            maxn=max(maxn,a[i]+a[j]);
    }
    printf("%d",maxn);
    return 0;
}