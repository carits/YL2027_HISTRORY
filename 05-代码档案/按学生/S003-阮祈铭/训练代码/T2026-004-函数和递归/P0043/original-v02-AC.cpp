#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q,a,b,cnt;
    bool ans[1010];
    string s,t,l;
    cin>>n>>m>>q>>s>>t;
    for(int i=0;i<=n-m;i++)
    {
        l="";
        for(int j=i;j<=i+m-1;j++)
            l+=s[j];
        if(l==t)
        {
            ans[i]=true;
            //cout<<i<<endl;
        }
        else
            ans[i]=false;
    }
    for(int i=1;i<=q;i++)
    {
        cnt=0;
        cin>>a>>b;
        a--,b--;
        for(int j=a;j<=b-m+1;j++)
        {
            if(ans[j])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}