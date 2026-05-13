#include <bits/stdc++.h>
using namespace std;

long long a[100005],b[100005];

string rev(string s)
{
    string t="";
    for(int i=s.size()-1;i>=0;i--)
    {
        t+=s[i];
    }
    return t;
}

int main()
{
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    long long n,sum=0,ans=0;
    string s,c;
    cin>>n;
    cin>>b[0];
    a[0]=1;
    for(int i=1;i<n;i++)
    {
        cin>>b[i];
        a[i]=a[i-1]*b[i-1];
    }
    a[n]=a[n-1]*b[n-1];
    cin>>s>>c;
    s=rev(s);
    c=rev(c);
    for(int i=0;i<s.size();i++)
    {
        int t=s[i]-'0';
        sum+=t*a[i];
    }
    for(int i=0;i<c.size();i++)
    {
        int t=c[i]-'0';
        ans+=t*a[i];
    }
    long long final=sum*ans;
    cout<<final;
    return 0;
}
