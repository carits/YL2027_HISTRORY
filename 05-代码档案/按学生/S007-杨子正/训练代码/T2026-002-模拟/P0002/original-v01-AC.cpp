#include <bits/stdc++.h>
using namespace std;
int n, a[11], sum;
int main()
{
	for (int i = 1; i <= 10; i++) 
        cin >> a[i];
	cin >> n;
	for (int i = 1; i <= 10; i++) 
        if (n + 30 >= a[i]) 
            sum++;
	cout << sum;
	return 0;
}