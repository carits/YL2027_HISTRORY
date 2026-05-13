#include <bits/stdc++.h>
using namespace std;
string a , b;
string s[400005];
int main ( )
{
    int n , m , k , cnt=0;
    cin >> n >> m >> k;
    while (n--)
    {
        cin >> b;
        a+=b;
    }
    int v=a.size ( )-1;
    for (int i=0;i<=v;i+=k)
    {
        cnt++;
        s[cnt]=a.substr (i , k);
    }
    if (s[1]!=s[2]&&s[1]!=s[3])
    {
        cout << 1 << " " << 1;
    }
    else if (s[cnt]!=s[cnt-1]&&s[cnt]!=s[cnt-2]) 
    {
        cout << n << " " << m;
    }
    else
    {
        for (int i=2;i<=cnt-1;i++)
        {
            if (s[i]!=s[i-1]&&s[i]!=s[i+1])
            {
                cout << (i+m-1)/m << " " << i-i/m*m;
                return 0;
            }
        }
    }
    return 0;
}