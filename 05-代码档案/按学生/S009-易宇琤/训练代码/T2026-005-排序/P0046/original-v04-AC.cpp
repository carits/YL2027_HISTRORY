#include <bits/stdc++.h>

using namespace std;

const int kN = 1e5 + 5;

int n;
int a[kN], b[kN];

void Sort(int l, int r)
{
  if(l == r)
  {
    return;
  }
		
	int mid = (l + r) / 2;
	Sort(l, mid);
	Sort(mid + 1, r);
	int p1 = l, p2 = mid + 1, p3 = l;
	while(p1 <= mid && p2 <= r)
	{
		if(a[p1] <= a[p2])
		{
			b[p3] = a[p1];
			p3 ++;
			p1 ++;
		}
		else
		{
			b[p3] = a[p2];
			p3 ++;
			p2 ++;
		}
	}
	while(p1 <= mid)
	{
		b[p3] = a[p1];
		p3 ++;
		p1 ++;
	}
	while(p2 <= r)
	{
		b[p3] = a[p2];
		p3 ++;
		p2 ++;
	}
	for(int i = l; i <= r; i ++)
		a[i] = b[i];
}

int main()
{
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> a[i];
  }

  Sort(1, n);

  for(int i = 1; i <= n; i ++)
  {
    cout << a[i] << " ";
  }
  return 0;
}