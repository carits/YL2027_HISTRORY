#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=1e6+10; 
int a[maxn],ans;
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
		}
		for (int i=1;i<n-i+1;i++)
		{ 
            ans=ans ? __gcd(ans, abs(a[i] - a[n - i + 1])) : abs(a[i] - a[n - i + 1]) ;
        }
		cout << ans << "\n" ;
	}	
	return 0;
}