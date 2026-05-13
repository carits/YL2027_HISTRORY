#include <bits/stdc++.h>
using namespace std;
int a[15];
int main ( )
{
    int x , y , z=1;
    cin >> x;
    y=x;
    while (y!=0)
    {
        a[y%10]=1;
    }
    while (z!=0)
    {
        z=0;
        x++;
        y=x;
        while (y!=0)
        {
            z+=a[y%10];    
        }
    }
    cout << x;
    return 0;
}