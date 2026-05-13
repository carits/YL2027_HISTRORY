#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,cnt,i,j,minn=INT_MAX;
int main()
{
    cin>>n>>a>>b>>c;
    for(i=1;i<=ceil(n/a);i++)
    {
        for(j=1;j<=ceil((n-i*a)/b);j++)
            if((n-a*i-b*j)%c==0)
            {
                minn=min(minn,i+j+(n-a*i-b*j)/c);
            }
    }
    cout<<minn;
    return 0;
}