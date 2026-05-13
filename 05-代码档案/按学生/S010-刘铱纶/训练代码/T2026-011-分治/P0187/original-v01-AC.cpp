#include<bits/stdc++.h>

#define int long long

using namespace std;

const int N = 5 * 1e5 + 5;

int n, a[N], cnt, b[N];

void hanshu(int lt, int rt)
{
	if(lt == rt)
	{
		return ;
	}
	
	int mid = (lt + rt) / 2;
	
	hanshu(lt, mid);
	hanshu(mid + 1, rt);
	
	int i = lt, j = mid + 1, k = lt;
	while(i <= mid && j <= rt)
	{
		if(a[i] <= a[j])
		{
			b[k] = a[i];
			i++, k++;
		}
		else
		{
			cnt += (mid + 1) - i;
			b[k] = a[j];
			j++, k++; 
		}
	}
	
	while(i <= mid)
	{
		b[k] = a[i];
		i++, k++;
	}
	
	while(j <= rt)
	{
		b[k] = a[j];
		j++, k++;
	}
	
	for(int h = lt; h <= rt; h++)
	{
		a[h] = b[h];
	}
	
	return ;
}

signed main()
{
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	} 
	
	hanshu(1, n);
	
	cout << cnt;
	return 0;
}