#include <bits/stdc++.h>
using namespace std;
bool a[15];
int main ( )
{
    int x , y;
    cin >> x;
    y=x;
    while (y!=0)
    {
        a[y%10]=1;
        y/=10;
    }
    while (1)
    {
        x++;
        y=x;
        int z=0;
        while (y!=0)
        {
            z+=a[y%10];
            y/=10;
        }
        if (z==0)
        {
            break;
        }
    }
    cout << x;
    return 0;
}