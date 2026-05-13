#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,n,a[20020];
signed main()
{
    cin>>T;
    while(T--)
    {
        cin>>n;
        int f=0,sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n==0)
        {
            for(int i=1;i<=n;i++)
            {
                if(a[i]>sum/n)
                {
                    f++;
                }
            }
            cout<<f<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}