#include<bits/stdc++.h>
using namespace std;
int n;
bool check(int x)
{
    for(int i=1;i<=x;i++)
    {
        if(i*(x-i)>=n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    cin>>n;
    int l=0,r=n+n+1,mid;
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