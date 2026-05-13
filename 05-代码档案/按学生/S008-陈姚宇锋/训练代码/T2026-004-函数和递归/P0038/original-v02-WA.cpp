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
signed main()
{
    int a,b;
    cin>>a>>b;
    bool flag=0;
    for(int i=a;i<=b;++i)
    {
        if(zhen(i))
        {
            cout<<i<<' ';
            flag=1;
        }
    } 
    if(flag==0)
    {
        cout<<"No";
    }  
    return 0;
}