#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct stu
{
	int yu,shu,ying,zong,id;
}a[1000009];
bool cmp(stu a,stu b)
{
	if(a.zong==b.zong)
	{
		if(a.yu==b.yu)
		{
			return a.id<b.id;
		}
		return a.yu>b.yu;
	}
	return a.zong>b.zong;
}
signed main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i].yu>>a[i].shu>>a[i].ying;
		a[i].zong=a[i].shu+a[i].ying+a[i].yu;
		a[i].id=i;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=5;++i)
	{
		cout<<a[i].id<<' '<<a[i].zong<<endl;
	}
	return 0;
}