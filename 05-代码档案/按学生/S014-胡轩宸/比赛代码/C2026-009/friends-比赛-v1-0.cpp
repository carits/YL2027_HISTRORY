#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,sum;
int a[100010];
signed main()
{
    freopen("friends.in","r",stdin);
    freopen("friends.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<sum/(n-i+1);
    }
	return 0; 
}

