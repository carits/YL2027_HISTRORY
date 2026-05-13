#include <bits/stdc++.h>
using namespace std;
string a , b , c;
string hlt (int n , string a , string b , string c)
{
    if (n==1) return "1:a->b\n";
    return hlt (n-1 , a , b , c)+hlt (n-1 , b , c , a);
}
int main ( )
{
    int n;
    cin >> n >> a >> b >> c;
    cout << hlt (n , a , b , c);
    return 0;
}