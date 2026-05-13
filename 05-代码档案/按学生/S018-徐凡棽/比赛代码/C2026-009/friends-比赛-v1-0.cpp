#include <bits/stdc++.h>
using namespace std;

long long a[100005];

int main()
{
    freopen("friends.in","r",stdin);
    freopen("friends.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<n<<" ";
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }
        else
        {
            cout<<1<<" ";
        }
    }
    return 0;
}
