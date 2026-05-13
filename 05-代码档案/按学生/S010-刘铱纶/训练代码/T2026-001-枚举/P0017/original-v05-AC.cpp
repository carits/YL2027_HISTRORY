#include<bits/stdc++.h>
using namespace std;
int n,a,b,c;
int main()
{
    cin>>n>>a>>b>>c;
    if(a>b)
        swap(a,b);
    if(b>c)
        swap(b,c);
    if(n%c==0)
    {
        cout<<n/c;
        return 0;
    }
    int ans=1e9;
    for(int i=0;i<=n/a;i++)
    {
        for(int j=0;j<=n/b;j++)
        {
            if((n-i*a-b*j)%c==0)
                ans=min(ans,i+j+(n-i*a-b*j)/c);
        }
    }
    cout<<ans;
    return 0;/////////
}