#include<bits/stdc++.h>
using namespace std;
int t,n,d,h;
int a[200010];
double ans;
int main()
{
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>d>>h;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]+h<=a[i+1])
            {
                ans+=(double)d*h/2.0;
            }
            else
            {
                ans+=(double)((1.0*d*(h-a[i+1]+a[i])/h)+d)*(double)(a[i+1]-a[i])/2.0;
            }
        }
        ans+=(double)d*h/2.0;
        cout<<setprecision(7)<<fixed<<ans<<endl;
    }
    return 0;
}