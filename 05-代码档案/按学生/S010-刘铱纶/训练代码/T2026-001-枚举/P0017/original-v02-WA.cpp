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
    for(int i=0;i<=n/c;i++)
    {
        if(((n-i*c)%b)%a==0)
            ans=min(ans,i+(n-i*c)/b+((n-i*c)%b)/a);
    }
    cout<<ans;
    return 0;
}