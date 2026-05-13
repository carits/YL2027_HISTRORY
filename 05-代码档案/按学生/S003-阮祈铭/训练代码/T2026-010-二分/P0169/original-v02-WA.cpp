#include<bits/stdc++.h>
using namespace std;
int m,n,a[100010]={INT_MIN},cnt;
int main()
{
    cin>>n>>m;
    a[n+1]=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=m;i++)
    {
        int l=0,r=n+1,mid,x;
        cin>>x;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(a[mid]<x)
            {
                l=mid;
            }
            else
            {
                r=mid;
            }
        }
        cnt+=min(abs(x-a[l]),abs(x-a[r]));
    }
    cout<<cnt<<endl;
    return 0;
}