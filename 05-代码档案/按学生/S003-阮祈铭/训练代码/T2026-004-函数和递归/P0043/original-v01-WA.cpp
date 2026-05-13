#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q,i,j,a,b,cnt;
    bool ans[1010];
    string s,t,l;
    cin>>n>>m>>q>>s>>t;
    for(i=1;i<=n-m+1;i++)
    {
        l="";
        for(j=i;j<=i+m-1;j++)
            l+=ans[j];
        if(l==t)
            ans[i]=true;
        else
            ans[i]=false;
    }
    for(i=1;i<=q;i++)
    {
        cnt=0;
        cin>>a>>b;
        for(j=a;j<=b+m-1;j++)
        {
            if(ans[j])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}