#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int k , r;
    cin >> k >> r;
    int a=k , b=k-r;
    int x=0 , y=0;
    while (a%10!=0)
    {
        a+=k;
        x++;
    }
    while (b%10!=0)
    {
        b+=k-r;
        y++;
    }
    cout << min (x , y);
    return 0;
}