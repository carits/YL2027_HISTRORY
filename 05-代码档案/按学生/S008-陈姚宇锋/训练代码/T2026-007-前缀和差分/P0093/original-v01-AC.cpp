#include <bits/stdc++.h>
using namespace std;
#define int long long
int diff[100009];
map<int,int>op;
signed main()
{                                 
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=1;i<=s.size();++i)
	{
		diff[i]=diff[i-1];
		if(s[i-1]=='1')
		{
			diff[i]++; 
		}
		else
		{
			diff[i]--;
		} 
		if(op[diff[i]]==0)
		{
			op[diff[i]]=i;
		}
	}
	op[0]=0;
	int maxx=0;
	for(int i=1;i<=n;++i)
	{
		maxx=max(maxx,i-op[diff[i]]);
	}
	cout<<maxx;
	return 0;
}