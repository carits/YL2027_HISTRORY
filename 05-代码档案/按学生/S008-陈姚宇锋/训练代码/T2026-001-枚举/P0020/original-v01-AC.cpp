#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a,b,c;
map<int,int>vis;
signed main()
{
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;++i)
    {
        cin>>a>>b>>c;
        if(a+b+c>1)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}