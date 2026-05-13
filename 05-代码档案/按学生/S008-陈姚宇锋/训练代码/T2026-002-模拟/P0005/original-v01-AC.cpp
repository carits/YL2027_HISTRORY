#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int x[1000009];
string s[1000009];
signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        cin>>x[i];
        cin>>s[i];
    }
    int sum=1;
    for(int i=1;i<=m;++i)
    {
        int a,b;
        cin>>a>>b;
        if(a==1)
        {
            if(x[sum]==1)
            {
                sum-=b;
            }
            else
            {
                sum+=b;
            }
        }
        else
        {
            if(x[sum]==1)
            {
                sum+=b;
            }
            else
            {
                sum-=b;
            }
        }
        if(sum<1)
        {
            sum+=n;
        }
        if(sum>n)
        {
            sum-=n;
        }
    }
    cout<<s[sum];
	return 0;
}	