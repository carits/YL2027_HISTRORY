#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int cnt;
int p[N];
bool check(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
void f(int x)
{
	for (int i = 2; i <= x / i; i++)
		if (x % i == 0)
			while (x % i == 0)
                x /= i, p[++cnt] = i;
	if (x > 1) 
        p[++cnt] = x;
}
signed main()
{
    int n;
    cin >> n;
    if (n == 1 || check(n))
        cout << "1\n0\n";
    else
    {
        f(n);
        if (cnt == 2)
            cout << 2;
        else
        {
            cout << "1\n";
            cout << p[1] * p[2];
        }
    }
    return 0;
}