#include <bits/stdc++.h>
using namespace std;
string s , t;
int main ( )
{
    int o , n;
    bool x=1; 
    cin >> o;
    while (o--)
    {
        cin >> n >> s;
        s=" "+s;
        t=s;
        x=1;
        while (1)
        {
            x=0;
            for (int i=1;i<=s.size ( )-1;i++)
            {
                if (s[i]==s[i+1])
                {
                    x=1;
                    t.erase (i , 2);   
                    break; 
                }
            }
            s=t;
            if (x==0)
            {
                break;
            }
        }
        if (s==" ")
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}