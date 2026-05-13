#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int n , k;
    cin >> n >> k;
    k=240-k;
    int sum=0 , cnt=0;
    for (int i=1;i<=n;i++)
    {
        if (sum>=k)
        cnt++;
        sum+=i*5;
    }
    cout << cnt;
    return 0;
}