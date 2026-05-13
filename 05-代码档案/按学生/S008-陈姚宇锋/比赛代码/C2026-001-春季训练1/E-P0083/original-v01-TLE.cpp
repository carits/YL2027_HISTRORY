#include <bits/stdc++.h>
using namespace std;
#define int long long                                      
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0; 
        int n,k;
        cin>>n>>k; 
        for(int i=1;i<=n;++i)
        {
            int flag=0;
            int x=i;
            int num=1;
            while(num<=k)
            {
                if(x%2==0)
                {
                    x/=2;
                }
                else
                {
                    x-=1;
                }
                if(x==0)
                {
                    flag=1;
                    break;
                }
                num++;
            }
            if(flag==0)
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}