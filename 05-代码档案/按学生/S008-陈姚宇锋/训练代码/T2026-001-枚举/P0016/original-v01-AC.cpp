#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
signed main()
{
    int cnt=0;
    cin>>n;
    for(int i=1;i<=9;++i)
    {
        for(int j=0;j<=9;++j)
        {
            for(int k=0;k<=9;++k)
            {
                if(i+j+k==n)
                {
                    cnt++;            
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}