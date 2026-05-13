#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char a , c;
    int b, d;
    int cnt=0;
    cin >> a >> b >> c >> d;
    for (int i='a';i<='h';i++)
    {
        for (int j=1;i<=8;i++)
        {
            if((abs(i-a)==1&&abs(j-b)==2)||(abs(i-a)==2&&abs(j-b)==1)) 
            {
                continue;
            }
            else if ((abs(i-c)==1&&abs(j-d)==2)||(abs(i-c)==2&&abs(j-d)==1))
            {
                continue;
            }
            else if (i==c||j==b)
            {
                continue;
            }
            else
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}