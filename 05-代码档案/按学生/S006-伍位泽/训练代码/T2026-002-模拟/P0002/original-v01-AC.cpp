#include <bits/stdc++.h>
using namespace std;
int a[15];
int main ( )
{
    int n , cnt=0;
    for (int i=1;i<=10;i++)
    {
        cin >> a[i];
    }
    cin >> n;
    for (int i=1;i<=10;i++)
    {
        if (a[i]<=n+30)
        {
            cnt++;
        }
    }
    cout <<  cnt;
    return 0;
}