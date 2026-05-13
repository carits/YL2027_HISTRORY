#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[1000009];
bool vis[1000009];
int dis[1000009];
 signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
            sum+=a[i];
        } 
        if(sum%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        sum/=n;
        int num=0;
        for(int i=1;i<=n;++i)
        {
            if(a[i]>sum)
            {
                num++;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}