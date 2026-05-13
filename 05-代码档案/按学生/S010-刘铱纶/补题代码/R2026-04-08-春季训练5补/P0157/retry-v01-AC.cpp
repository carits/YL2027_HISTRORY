#include <bits/stdc++.h>

using namespace std;

string a, b, a1, a2, b1, b2;

int main()
{
	cin >> a >> b;
	
	int da = 0, db = 0;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == 'a' || a[i] == 'o' || a[i] == 'e' || a[i] == 'i' || a[i] == 'u' || a[i] == 'v')
		{
			da = i;
			break;
		}
		a1 = a1 + a[i];
	}
	
	for(int i = da; i < a.size(); i++) 
	{
		a2 = a2 + a[i];
	}
	
	for(int i = 0; i < b.size(); i++)
	{
		if(b[i] == 'a' || b[i] == 'o' || b[i] == 'e' || b[i] == 'i' || b[i] == 'u' || b[i] == 'v')
		{
			db = i;
			break;
		}
		b1 = b1 + b[i];
	}
	
	for(int i = db; i < b.size(); i++) 
	{
		b2 = b2 + b[i];
	}
	
	if(a1 == b1 && a2 == b2) 
	{
		cout << 3;
	}
	else if (a1 == b1 && a2 != b2) 
	{
		cout << 2;
	}
	else if (a1 != b1 && a2 == b2) 
	{
		cout << 1;
	}
	else 
	{
		cout << 0;
	}
	return 0;
}