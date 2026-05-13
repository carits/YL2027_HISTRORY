#include <bits/stdc++.h>
using namespace std;
string s;
int t , n;

bool zfc (int x , int y)
{
    string a=s.substr (0 , x)+s.substr (y);
    string b=s.substr (x , y-x);
    for (int i=0;i<=a.size ( )-1;i++)
    {
        if (a[i]==b[0])
        {
            if (b.size ( )==1)
            {
                b="";
                break;
            }
            b=b.substr (1 , b.size ( )-1);
        }
    }
    if (b=="")
    {
        return 1;
    }
    return 0;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        bool p=0;
        for (int i=1;i<=s.size ( )-1;i++)
        {
            for (int j=i+1;j<=min (s.size ( )-1 , s.size ( )/2+5);j++)
            {
                if (zfc (i , j)==1)
                {
                    p=1;
                    break;
                }    
            }
            if (p==1)
            {
                break;
            }
        }
        if (p==0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}