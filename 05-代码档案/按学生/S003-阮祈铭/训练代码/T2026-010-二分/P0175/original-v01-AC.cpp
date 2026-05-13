#include<bits/stdc++.h>
using namespace std;
int n,k,a[100010];
bool check(int num)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt+=a[i]/num;
    }
    return cnt >= k;
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=1e8+10,mid;
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
    return 0;
}