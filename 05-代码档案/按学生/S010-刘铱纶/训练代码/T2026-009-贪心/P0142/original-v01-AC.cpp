#include<bits/stdc++.h>

#define int long long

using namespace std;

int n;
priority_queue<int> pq;

signed main()
{
	cin >> n;
	
	int a, sum = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a;
		
		pq.push(-a);
		sum += a;
		
		if(sum < 0)
		{
			sum += pq.top();
			pq.pop();
		}
	} 
	
	cout << pq.size();
	return 0;
}