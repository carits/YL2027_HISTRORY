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
        cnt++;
        sum+=i*5;
        if (sum>k)
        {
            break;
        }
    }
    cout << cnt-1;
    return 0;
}