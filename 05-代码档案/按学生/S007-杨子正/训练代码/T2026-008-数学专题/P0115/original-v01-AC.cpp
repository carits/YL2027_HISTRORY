#include <bits/stdc++.h>
using namespace std;
int n, b[3005], s;
int main()
{
	b[1] = 1;
	cin >> n;
	for (int i = 2; i <= n; i++)
    	if (b[i] == 0)
    		for (int j = 2; j * i <= n; j++)
        		b[i * j]++;
	for (int i = 1; i <= n; i++)
    	if (b[i] == 2) 
            s++;
	cout << s;
	return 0;
}