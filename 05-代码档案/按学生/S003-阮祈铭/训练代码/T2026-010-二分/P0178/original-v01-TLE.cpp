#include<bits/stdc++.h>
using namespace std;
int q,k,n,a,b;
bool check(int x)
{
    int cnt=k,ans=0;
    for(int i=1;i<=x;i++)
    {
        if(cnt<=a)
        {
            return false;
        }
        cnt-=a;
        ans++;
    }
    while(cnt>b)
    {
        cnt-=b;
        ans++;
    }
    return ans>=n;
}
int main()
{
    cin>>q;
    while(q--)
    {
        cin>>k>>n>>a>>b;
        int l=-1,r=n+1,mid;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(check(mid))
            {
                l=mid;
            }
            else
            {
                r=mid;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}