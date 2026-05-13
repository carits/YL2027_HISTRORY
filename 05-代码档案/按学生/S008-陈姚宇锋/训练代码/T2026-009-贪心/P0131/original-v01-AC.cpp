#include <bits/stdc++.h>
using namespace std;
#define int long long
string s[100009];
bool cmp(string s1,string s2)
{
	if(s1+s2<s2+s1)
	{
		return 1;
	}
	return 0;
}
signed main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>s[i];
	}
	sort(s+1,s+1+n,cmp);
	for(int i=1;i<=n;++i)
	{
		cout<<s[i];
	}
}