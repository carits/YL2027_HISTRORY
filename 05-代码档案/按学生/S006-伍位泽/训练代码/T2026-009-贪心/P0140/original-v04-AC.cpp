#include <bits/stdc++.h>
using namespace std;
struct node
{
	int a , b;
};
node a[50005];
bool cmp (node a , node b)
{
	return a.a+a.b<b.a+b.b;
}
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0); 
	int n , maxn=-1e9 , cnt=0;;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i].a >> a[i].b;
	}
	sort (a+1 , a+n+1 , cmp);
	for (int i=1;i<=n;i++)
	{
		maxn=max (maxn , cnt-a[i].b);
		cnt+=a[i].a;
	}
	cout << maxn;
	return 0;
}