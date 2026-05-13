#include<bits/stdc++.h>
using namespace std;
const int kMaxN=1e6+10;
int a[kMaxN];
int main()
{
    int n,i,t=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
        if(a[i]>=t)
        {
            t++;
        }
    }
    cout<<--t;
    return 0;
}