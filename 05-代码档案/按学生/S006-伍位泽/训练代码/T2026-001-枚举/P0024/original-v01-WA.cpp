#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int n , k;
    cin >> n >> k;
    k=240-k;
    int sum=0 , cnt=0;
    for (int i=1; ;i++)
    {
        if (sum>=k)
        {
            break;
        }
        cnt++;
        sum+=i*n;
    }
    cout << cnt;
    return 0;
}