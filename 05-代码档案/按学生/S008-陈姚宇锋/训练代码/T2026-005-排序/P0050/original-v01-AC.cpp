#include <bits/stdc++.h>
using namespace std;
#define int long long
struct stu
{
	int name,fen;
}a[100009];
bool cmp(const stu a,const stu b)
{
	if(a.fen==b.fen)
	{
		return a.name<b.name;
	}
	return a.fen>b.fen;
} 
signed main()
{
	int n,m;
	cin>>n>>m;
	int ch=m*150/100;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i].name>>a[i].fen;
	} 
	sort(a+1,a+1+n,cmp);
	int k=a[ch].fen;
	int cnt=0;
	for(int i=1;i<=n;++i)
	{
		if(a[i].fen>=k)
		{
			cnt+=1;
		}
	}
	cout<<k<<' '<<cnt<<endl;
	for(int i=1;i<=n;++i)
	{
		if(a[i].fen>=k)
		{
			cout<<a[i].name<<' '<<a[i].fen<<endl;
		}
	}
	return 0;
}