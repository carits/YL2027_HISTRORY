#include<bits/stdc++.h>
using namespace std;
int q,k,n,a,b;
bool check(int x)
{
    if((x-1)*a>=k-a)
    {
        return false;
    }
    return x+(k-x*a-b-1)/b+1>=n;
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