#include<bits/stdc++.h>
using namespace std;
long long q,k,n,a,b;
bool check(long long x)
{
    if((x-1)*a>=k-a)
    {
        return false;
    }
    return (n-x-1)*b<k-x*a-b;
}
int main()
{
    cin>>q;
    while(q--)
    {
        cin>>k>>n>>a>>b;
        long long l=-1,r=n+1,mid;
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