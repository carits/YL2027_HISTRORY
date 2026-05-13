#include <bits/stdc++.h>
using namespace std;
string s , t;
int n;
bool sf (int aa , int bb , int cc)
{
    string p;
    for (int i=aa;i<=bb;i++)
    {
        p+=s[i];
    }
    for (int i=bb-1;i>=cc;i--)
    {
        p+=s[i];
    }
    if (p==t) return 1;
    return 0;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> s >> t;
        bool p=0;
        for (int i=0;i<=s.size ( )-1;i++)
        {
            for (int j=i;j<=s.size ( )-1;j++)
            {
                for (int k=0;k<=j;k++)
                {
                    if ((j-i+1)+(j-k)!=t.size ( )) continue;
                    if (sf (i , j , k)==1)
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
            if (p==1)
            {
                break;
            }
        }
        if (p==1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return  0;
}