#include<bits/stdc++.h>
using namespace std;
int n,s,m;
bool a[1005];
int main()
{
    cin>>n>>s>>m;
    s--;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j+=!a[s])
            s=s%n+1;
        cout<<s<<" ";
        a[s]=1;
    }
    return 0;
}