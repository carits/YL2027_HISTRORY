#include <bits/stdc++.h>
using namespace std;
#define int long long
bool zhen(int x)
{
    if(x<2)
    {
        return 0;
    }
    for(int i=2;i*i<=x;++i)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    int x1=x;
    int y=0;
    while(x)
    {
        int a=x%10;
        x/=10;
        y=y*10+a;
    }
    if(y<2)
    {
        return 0;
    }
    for(int i=2;i*i<=y;++i)
    {
        if(y%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int ans[1000009];
signed main()
{
    int cnt=0;
    int a,b;
    cin>>a>>b;
    bool flag=0;
    for(int i=a;i<=b;++i)
    {
        if(zhen(i))
        {
            cnt++;
            ans[cnt]=i;
            flag=1;
        }
    } 
    if(flag==0)
    {
        cout<<"No";
    }  
    else
    {
        for(int i=1;i<cnt;++i)
        {
            cout<<ans[i]<<',';
        }
        cout<<ans[cnt];
    }
    return 0;
}