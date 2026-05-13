#include <bits/stdc++.h>
using namespace std;
string a , b , c;
void hlt (int n , string a , string b , string c)
{
   hlt (n-1 , a , b , c);
   cout << n << ":" << a << "->" << c; 
   hlt (n-1 , b , c , a);
}
int main ( )
{
    int m;
    cin >> m >> a >> b >> c;
    hlt (m , a , b , c);
    return 0;
}