#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[10009];                                             
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
        }
        int flag=0;
        for(int i=1;i<n;++i)
        {
            if(a[i]>a[i+1])
            {
                flag+=1;
            }
        }
        if(flag==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        } 
    }
}