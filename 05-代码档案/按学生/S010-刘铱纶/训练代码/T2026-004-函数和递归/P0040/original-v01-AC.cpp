#include<bits/stdc++.h>

using namespace std;

int x, y;
int a[3005], cnt;

int main()
{
    cin >> x >> y;
    for(int i = x; i <= y; i++)
    {
        if(i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
        {
            a[++cnt] = i;
        }
    }
    cout << cnt << "\n";
    for(int i = 1; i <= cnt; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}