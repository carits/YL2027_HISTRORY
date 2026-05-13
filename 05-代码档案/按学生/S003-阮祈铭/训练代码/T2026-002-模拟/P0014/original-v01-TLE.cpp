#include<bits/stdc++.h>
using namespace std;
int i,n,k,j,cnt;
bool a[10010];
int main()
{
    cin>>n>>k;
    for(i=1;i=k;i++)
    {
        for(j=0;j<=n;j+=i)
            a[j]=!a[j];
    }
    for(i=1;i<=n;i++)
        if(a[i])
            cnt++;
    cout<<cnt;
    return 0;
}