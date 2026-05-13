#include <bits/stdc++.h>
#define int long long
using namespace std;
const int M=1e14 , N=1e18;
int a[100005] , b[50]; 
int n , minn=1e18;
void mj (int k)
{
	int sum=0;
	memset (b , 0 , sizeof (b));
	b[0]=1;
	for (int i=1;i<=n-1;i++)
	{
		if (b[i]>N)
		{
			break;
		}
		b[i]=b[i-1]*k;
	}
	for (int i=0;i<=n-1;i++)
	{
		if (a[i]==b[i]) continue;
		sum+=abs(a[i]-i);
	}
	minn=min (minn , sum);
}
signed main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=0;i<=n-1;i++)
    {
    	cin >> a[i];
	}
	sort (a+1 , a+n+1);
	for (int i=1;i<=pow (M , 1.0/(n-1));i++)
	{
		mj (i);
	}
	cout << minn;
    return 0;
}