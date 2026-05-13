#include <bits/stdc++.h>
using namespace std;
#define int long long
int diff[100009];
signed main()
{
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	for(int i=1;i<=s.size();++i)
	{
		diff[i]=diff[i-1]+(s[i-1]-'a'+1);
	}
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		cout<<diff[r]-diff[l-1]<<endl;
	}
	return 0;
}