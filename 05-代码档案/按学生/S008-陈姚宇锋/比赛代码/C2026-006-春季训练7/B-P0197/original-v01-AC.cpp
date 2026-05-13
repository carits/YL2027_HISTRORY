#include <bits/stdc++.h>
using namespace std;
#define int long long
int ans[1000009];
int ans2[1000009];
int vis[1000009];
int a[1000009];
int dis1[1000009];
int dis2[1000009];
int sum=INT_MAX;
int num[1000009];
int n;
 signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sum=INT_MAX;
        cin>>n;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
                    }
        cout<<a[n]<<' ';
        for(int i=2;i<=n;++i)
        {
            cout<<a[i-1]<<' ';
        } 
        cout<<endl;
    }
    return 0;
}