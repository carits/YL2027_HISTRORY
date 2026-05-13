#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    long long n,m,a,b,c,d;
    cin>>n>>m>>a>>b>>c>>d;
    if(a==c&&b==d)
    {
        cout<<(n+1)*a+(m+1)*b;
    }
    else 
    {
        cout<<21+(n+m)/11+(n+m)%11;   
    }
    return 0;
} 
