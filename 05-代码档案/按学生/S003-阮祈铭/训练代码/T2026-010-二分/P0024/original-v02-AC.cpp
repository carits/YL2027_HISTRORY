#include<bits/stdc++.h>
using namespace std;
long long n, k, cnt=0;
int main ()
{
	cin >> n >> k;
	for(int i = 1; i <= n + 1; i ++)
	{
		cnt += i*5;
		if (cnt > 240-k)
		{
			cout<<i-1<<endl;
			return 0;
		}
	}
	cout << n << endl;
	return 0;
}