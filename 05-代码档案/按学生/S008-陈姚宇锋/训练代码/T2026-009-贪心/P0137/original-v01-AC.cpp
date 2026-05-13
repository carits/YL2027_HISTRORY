#include <bits/stdc++.h>
using namespace std;
#define int long long
int pre[1000009];
int a[1000009];
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int sum=0;
		for(int i=0;i<s.size();++i)
		{
			if(s[i]=='B')
			{
				sum++;
				i+=k-1; 
			}
		} 
		cout<<sum<<endl;
	}
	return 0;
}