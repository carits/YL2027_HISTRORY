#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,i,j,minn=INT_MAX;
int main()
{
    cin>>n>>a>>b>>c;
    for(i=0;i<=n/a;i++)
    {
        for(j=0;a*i+b*j<=n;j++)
            if((n-a*i-b*j)%c==0)
                minn=min(minn,i+j+(n-a*i-b*j)/c);
    }
    cout<<minn;
    return 0;
}