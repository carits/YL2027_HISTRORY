#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,cnt,s,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=0;
        cin>>a>>b>>c;
        if(a==1)
            s++;
        if(b==1)
            s++;
        if(c==1)
            s++;
        if(s>=2)
            cnt++;
    }
    cout<<cnt;
    return 0;
}