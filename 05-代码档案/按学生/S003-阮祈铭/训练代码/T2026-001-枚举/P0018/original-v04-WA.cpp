#include<bits/stdc++.h>
using namespace std;
int n,i,a[5010],s,j,maxn=INT_MIN;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        s=a[i];
        for(j=n;j<=n;j++)
        {
            s+=a[j];
            maxn=max(maxn,s);
        }
    }
    cout<<maxn;
    return 0; 
}