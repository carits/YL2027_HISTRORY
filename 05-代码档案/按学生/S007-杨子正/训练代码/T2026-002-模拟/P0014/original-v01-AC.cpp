#include <bits/stdc++.h>
using namespace std;
bool a[10005];
int main() 
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        for (int j = i; j <= n; j += i)
        {
            if (a[j] == true)
                a[j] = false;
            else
                a[j] = true;
        }
    for (int i = 1; i <= n; i++)
        if (a[i] == true)
            cout << i << ' ';
    return 0;
}