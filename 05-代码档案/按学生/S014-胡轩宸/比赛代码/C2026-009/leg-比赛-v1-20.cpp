#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a,b,c,d,sum,x,y;
signed main() 
{
    freopen("leg.in", "r", stdin);
    freopen("leg.out", "w", stdout);
    cin>>n>>m>>a>>b>>c>>d;
    if(m==0)
    {
        cout<<(n/2)*c+(n/2+n%2)*a;
        return 0;
    }
    if(n==0)
    {
        cout<<(m/2)*d+(m/2+m%2)*b<<' '<<(m/2)+(m/2+m+2);
        return 0;
    }
    while(x!=n)
    {
        x++;
        if((x+y)%2==1)
        {
            sum+=c;
        }
        else
        {
            sum+=a;
        }
        
        //cout<<x<<' ';
    }
    while(y!=m)
    {
        y++;
        
        if(x+y%2==1)
        {
            sum+=d;
        }
        else
        {
            sum+=b;
        }
        //cout<<y<<' ';
    }
    cout<<sum;
    return 0;
}
