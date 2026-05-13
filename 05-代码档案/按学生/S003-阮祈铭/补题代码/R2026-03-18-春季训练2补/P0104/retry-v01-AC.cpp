#include<bits/stdc++.h>
using namespace std;
int t,n,a,b,ans;
int main()
{
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            if(a>b)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}