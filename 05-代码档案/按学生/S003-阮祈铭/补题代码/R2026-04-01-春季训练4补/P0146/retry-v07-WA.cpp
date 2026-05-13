#include<bits/stdc++.h>
using namespace std;
int t,n,x;
int a[100010];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<n-1<<endl<<1<<' '<<n<<endl;
        x=a[1]+a[n]%2==0 ? a[1] : a[n];
        for(int i=2;i<n;i++)
        {
            if((x+a[i])%2==0)
            {
                cout<<i<<' '<<n<<endl;
            }
            else
            {
                cout<<1<<' '<<i<<endl;
            }
        }
    }
    return 0;
}