#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[200009]; 
int cnt1[200009]; 
int cnt2[200009]; 
signed main()
{
    int n,k;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++) 
    {
        int x=a[i],sum=0;
        while(x)
        {
            if(cnt1[x]<k) 
            {
                cnt1[x]++;
                cnt2[x]+=sum;
            }
            x/=2;
            sum++;
        }
    }
    int ans=INT_MAX; 
    for (int i=1;i<=200009;i++)
    {
        if(cnt1[i]>=k)
        {
            ans=min(ans,cnt2[i]);
        }
    }
    cout<<ans; 
    return 0;
}