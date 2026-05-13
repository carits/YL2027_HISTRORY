#include <bits/stdc++.h>
using namespace std;
string a , b;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    long long x=1 , y=1;
    for (int i=0;i<=a.size()-1;i++)
    {
        x*=a[i]-'A'+1;    
    }
    for (int i=0;i<=b.size()-1;i++)
    {
        y*=b[i]-'A'+1;    
    }
    if (x%47==y%47)
    {
        cout << "GO";
    }
    else
    {
        cout << "STAY";
    }
    return 0;
}