#include <bits/stdc++.h>
using namespace std;
#define int long long      
map<int,int>op;                                
signed main()
{
    for(int i=1;i<=1e7;++i)
    {
        int x=i;
        int num=1;
        while(1)
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
                break;
            }
            num++;
        }
        op[i]=num;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0; 
        int n,k;
        cin>>n>>k; 
        for(int i=1;i<=n;++i)
        {
            if(op[i]>k)
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}