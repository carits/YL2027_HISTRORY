#include <bits/stdc++.h>
using namespace std;
struct node
{
	int id , w;
	bool operator < (const node &a) const
	{
		return id>a.id;
	}
};
priority_queue <node> q;
int main ( )
{
	int n , v;
	long long sum=0;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> v;
		sum+=v;
		q.push ({v , 1});
		if (sum<0)
		{
			sum-=q.top( ).id;
			q.pop( ); 		
		}
	}
	cout << q.size ( );
	return 0;
}