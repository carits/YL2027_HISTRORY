#include <bits/stdc++.h>
using namespace std;
struct node
{
	int a , b;
};
node a[50005];
bool cmp (node a , node b)
{
	if (a.a!=b.a) return a.a<b.a;
	return a.b>b.a;
}
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0); 
	int n , sum=0 , cnt=0;;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i].a >> a[i].b;
	}
	sort (a+1 , a+n+1 , cmp);
	cnt=a[1].a;
	for (int i=2;i<=n;i++)
	{
		if (cnt-a[i].b>=0)
		{
			sum+=cnt-a[i].b;
		}
		cnt+=a[i].a;
	}
	cout << sum;
	return 0;
}