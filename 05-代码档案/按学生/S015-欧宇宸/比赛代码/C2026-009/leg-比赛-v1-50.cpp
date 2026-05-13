#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a,b,c,d;
int ans =0;
signed main()
{
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    cin>>m>>n>>a>>b>>c>>d;
    if(a==c&&b==d)
    {
        cout<<a*m+b*n;
    } 
    else if(a==b&&c==d)
    {
        if(m%2==0&&n%2==0)
        {
            cout<<((m+n)/2*a)+((m+n)/2*c);
        }
        else
        {
            cout<<(((m+n)/2+1)*a)+(((m+n)/2)*c);
        }
    }
    else if(a<b&&c>d)
    {
        if(n==m)
        {
            cout<<a*m+b*n;
        }
        int tot=abs(m-n);
        if(n<m)
        {
            cout<<a*n+d*n+(tot-tot/2)*a+(tot/2)*c;
        }
        if(n>m)
        {
            cout<<a*n+d*n+(tot-tot/2)*b+(tot/2)*d; 
        }
    }
   
    return 0;
} 
