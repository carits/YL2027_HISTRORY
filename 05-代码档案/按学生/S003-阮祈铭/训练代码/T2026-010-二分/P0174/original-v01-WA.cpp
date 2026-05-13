#include<bits/stdc++.h>
using namespace std;
int n,a[100010];
bool check(int c)
{
    for(int i=1;i<=n;i++)
    {
        c+=a[i];
        if(c<=0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=1010,mid;
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
    cout<<r<<endl;
    return 0;
}