#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],ans=1,cnt=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]<=a[i-1]*2)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else
        {
            cnt=1;
        }//
    }
    cout<<ans<<endl;
    return 0;
}