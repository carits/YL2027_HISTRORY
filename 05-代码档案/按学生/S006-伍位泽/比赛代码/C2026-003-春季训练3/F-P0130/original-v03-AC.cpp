#include <bits/stdc++.h>
#define int long long
using namespace std;
bool gcd (int a , int b)
{
    while (b!=0)
    {
        int c=a%b;
        a=b , b=c;
    } 
    if (a==1)
    {
        return 1;
    }       
    return 0;
}
signed main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int a , b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int p=-1;
        for (int i=a+1;i<=b-1;i++)
        {
            if (gcd (a , i)==1&&gcd (i , b)==1)
            {
                p=i;
                break;
            }    
        }
        cout << p << "\n";
    }
    return 0;
}