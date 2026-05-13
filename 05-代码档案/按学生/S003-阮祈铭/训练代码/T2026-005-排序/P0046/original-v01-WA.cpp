#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100010];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
        cout<<a[i];
    return 0;
}