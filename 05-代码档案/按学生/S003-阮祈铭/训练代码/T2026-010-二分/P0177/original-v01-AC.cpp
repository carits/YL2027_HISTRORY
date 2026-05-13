#include<bits/stdc++.h>
using namespace std;
int n;
bool check(int x)
{
    return x*log10(x)>=n-1;
}
int main()
{
    cin>>n;
    int l=0,r=2e9+10,mid;
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