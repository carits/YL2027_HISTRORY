#include<bits/stdc++.h>
using namespace std;
struct tt{
    int a,b;
}x[100010];
bool cmp(tt a,tt b)
{
    return a.b<b.b;
}
int main()
{
    int n,a,s,b,i,cnt=0;
    cin>>n>>s>>a>>b;
    for(i=1;i<=n;i++)
    {
        cin>>x[i].a>>x[i].b;
    }
    sort(x+1,x+n+1,cmp);
    for(i=1;i<=n&&s>0;i++)
    {
        if(s>x[i].b&&x[i].a<=a+b)
        {
            cnt++;
            s-=x[i].b;
        }
    }
    cout<<cnt;
    return 0;
}