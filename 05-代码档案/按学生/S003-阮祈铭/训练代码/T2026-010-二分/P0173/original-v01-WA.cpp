#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100010];
bool check(int h)
{
    for(int i=1,w=1;i<n;i++)
    {
        int l=w;
        while(a[l]>=a[w])
        {
            l++;
        }
        w=l;
        if(w>n)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    long long l=0,r=a[n]+1,mid;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<l<<endl;
    return 0;
}