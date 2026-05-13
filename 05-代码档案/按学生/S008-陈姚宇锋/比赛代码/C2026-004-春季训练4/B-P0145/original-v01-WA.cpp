#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
int num[100009];
void check()
{
	num[0]=1;
	for(int i=1;i<100000;i++) 
    {
        num[i]=(num[i-1]/2)%mod;
    }
}
signed main()
{
    int t;
	cin >> t;
	check();
	for(int i = 1;i <= t;i++) 
    {
        int x;
        cin>>x;
    }
	for(int i = 1;i <= t;i++)
	{
	    int x;
		cin>>x;
		cout << num[x] << endl;
	}
	return 0;
}