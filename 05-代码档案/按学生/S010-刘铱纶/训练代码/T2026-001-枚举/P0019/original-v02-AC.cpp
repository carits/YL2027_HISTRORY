#include<bits/stdc++.h>
using namespace std;
long long n,t,a[100005];
int main()
{
    cin>>n>>t;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    long long ans=-1e9,i=1,j=n;
    while(i<j)
    {
        if(a[i]+a[j]>t)
            j--;
        else
        {
            ans=max(ans,a[i]+a[j]);
            i++;
        }
    }
    if(ans==-1e9)
        cout<<0;
    else
        cout<<ans;
    return 0;/////
}