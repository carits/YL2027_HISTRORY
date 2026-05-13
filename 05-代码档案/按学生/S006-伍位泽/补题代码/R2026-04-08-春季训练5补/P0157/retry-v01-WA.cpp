#include <bits/stdc++.h>
using namespace std;
string a , b;
string n1 , m1 , n2 , m2;
void bh1 ( )
{
    while (a!=""&&!(a[0]=='a'||a[0]=='e'||a[0]=='i'||a[0]=='o'||a[0]=='v'))
    {
        n1+=a[0];
        a=a.substr(1 , a.size ( )-1); 
    }
    m1=a;
}
void bh2 ( )
{
    while (b!=""&&!(b[0]=='a'||b[0]=='e'||b[0]=='i'||b[0]=='o'||b[0]=='v'))
    {
        n2+=b[0];
        b=b.substr(1 , b.size ( )-1); 
    }
    m2=b;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    if (a[0]=='a'||a[0]=='e'||a[0]=='i'||a[0]=='o'||a[0]=='v')
    {
        n1="" , n2=a;
    }
    else
    {
        bh1 ( );
    }
    if (b[0]=='a'||b[0]=='e'||b[0]=='i'||b[0]=='o'||b[0]=='v')
    {
        n2="" , m2=b;
    }
    else
    {
        bh2 ( );
    }
    if (n1==n2&&m1==m2)
    {
        cout << 3;
    }
    else if (n1==n2)
    {
        cout << 2;
    }
    else if (m1==m2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}