#include <bits/stdc++.h>
using namespace std;
int a,b,p;
int main()
{
	cin >> a >> b >> p;
    int res=pow(a,b);
    cout << 'a' << '^' << b << " mod " << p << '=' << res%p;
	return 0;
}