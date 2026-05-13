#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,i,cnt=0;
    char s[200010];
    cin>>n>>x>>y>>s;
    for(i=n-1;i>=n-x;i--)
    {
        if(i==n-y-1)
        {
            if(s[i]=='0')
                cnt++;
        }
        else
        {
            if(s[i]=='1')
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}