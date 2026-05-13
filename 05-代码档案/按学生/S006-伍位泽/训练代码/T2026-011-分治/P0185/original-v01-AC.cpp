#include <bits/stdc++.h>
#define int long long
using namespace std;
map <int , int> mp;
int a , b , p;
void ksm (int k)
{
	if (k==0)
    {
        mp[0]=1;
        return;
    }
	if (k%2==0)
	{
		ksm (k/2);
        mp[k]=(long long) mp[k/2]*mp[k/2]%p;
	}
	else
	{
		ksm (k/2);
        mp[k]=(long long) mp[k/2]*mp[k/2]%p*a%p;
	}
}
signed main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	 cin >> a >> b >> p;
	 cout << a << '^' << b << " mod " << p << '=';
    ksm (b);
    cout << mp[b];
	return 0;
} 