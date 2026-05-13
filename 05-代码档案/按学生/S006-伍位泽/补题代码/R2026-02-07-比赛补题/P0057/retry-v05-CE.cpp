#include <bits/stdc++.h>
using namespace std;
string a="" , b;
string l[400005];
int main ( )
{
    int n , m , k , cnt=0;
    cin >> n >> m >> k;
    for (int i=1;i<=n;i++)
    {
        cin >> b;
        a+=b;
    }
    int v=a.size ( )-1;
    for (int i=0;i<=v;i+=k)
    {
        cnt++;
        vl=a.substr (i , k);
    }
    if (l[1]!=l[2]&&l[1]!=l[3])
    {
        cout << 1 << " " << 1;
    }
    else if (l[cnt]!=l[cnt-1]&&l[cnt]!=l[cnt-2]) 
    {
        cout << n << " " << m;
    }
    else
    {
        for (int i=2;i<=cnt-1;i++)
        {
            if (l[i]!=l[i-1]&&l[i]!=l[i+1])
            {
                if (i%m==0) 
                {
                    cout << i/m << " " << m;
                }
                else 
                {
                    cout << i/m+1 << " " << i-i/m*m;
                }
            }
        }
    }
    return 0;
}