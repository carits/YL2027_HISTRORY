#include <bits/stdc++.h>
using namespace std;
string a , b , c;
void hlt (int n , string a , string b , string c)
{
  if (n==0) return;
   hlt (n-1 , a , b , c);
   cout << n << ":" << a << "->" << c << "\n";
  hlt (n-1 , b , c , a);
}
int main ( )
{
    int n;
    cin >> n >> a >> b >> c;
    hlt (n , a , b , c);
    return 0;
}