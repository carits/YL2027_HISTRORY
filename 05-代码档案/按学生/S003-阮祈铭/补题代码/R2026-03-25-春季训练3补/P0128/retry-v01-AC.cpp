#include<bits/stdc++.h>
using namespace std;
const int kMaxN=3e5+10;
int n,a[kMaxN];
long long ans=LONG_LONG_MAX;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int c=1;c<=pow(2e14,1.0/(n-1));c++)
    {
        long long sum=0;
        long long x=1;
        for(int i=1;i<=n;i++)
        {
            sum+=abs(x-a[i]);
            x*=c;
        }
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}