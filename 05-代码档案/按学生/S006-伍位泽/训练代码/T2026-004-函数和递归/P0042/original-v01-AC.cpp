#include <bits/stdc++.h>
using namespace std;
int yuan (int a)
{
    int b=3;
    while (a--)
    {
        b=(b-1)*2;
    }    
    return b;
}
int main ( )
{
    int n , a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        cout << yuan (a);
    }
    return 0;
}