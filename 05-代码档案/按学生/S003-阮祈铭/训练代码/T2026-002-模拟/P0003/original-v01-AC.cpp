#include<bits/stdc++.h>
using namespace std;
int l,m,a,b,i,n[10010],cnt,j;
int main()
{
    cin>>l>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        for(j=a;j<=b;j++)
            n[j]=1;
    }
    for(i=0;i<=l;i++)
    {
        if(n[i]==0)
            cnt++;
    }
    cout<<cnt;
    return 0;
}