#include <bits/stdc++.h>
using namespace std;
long long a;
int main ( )
{
   cin >> a;
    int l=1 , r=100000;
    while (l<r)
    {
        int mid=(l+r)/2;
        if ((long long) mid*mid*mid>=a)
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    if (l*l*l>a)
    {
        l--;
    }
    cout << l;
    return 0;
}