#include<bits/stdc++.h>
using namespace std;
const int kMaxN=2*1e5;
int a[kMaxN];
int x[kMaxN];
int main()
{
    int t,i,j,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<=n;j++)
            x[j]=0;
        for(j=n;j>=1;j--)
        {
            x[a[j]]++;
            if(x[a[j]]>1)
            {
                cout<<j<<endl;
                break;
            }
        }
        if(x[a[j]]<=1)
            cout<<0<<endl;
    }
    return 0;
}