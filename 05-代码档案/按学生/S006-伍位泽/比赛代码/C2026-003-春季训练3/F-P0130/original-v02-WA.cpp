#include <bits/stdc++.h>
using namespace std;
bool gcd (long long a , long long b)
{
    while (b!=0)
    {
        long long c=a%b;
        a=b , b=c;
    } 
    if (a==1)
    {
        return 1;
    }       
    return 0;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long a , b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int p=-1;
        for (long long i=a+1;i<=b-1;i++)
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