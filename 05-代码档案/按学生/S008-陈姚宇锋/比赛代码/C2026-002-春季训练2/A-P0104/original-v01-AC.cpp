#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    { 
        int n;
        cin>>n;
        int ans=0;
        while(n--)
        {
            int a,b;
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