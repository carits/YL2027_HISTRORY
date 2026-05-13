#include <bits/stdc++.h>
using namespace std;
#define int long long
int uo;
bool check(int n)
{
    string s=to_string(n);
    if(s[0]==s[1] || s[0]==s[2] || s[0]==s[3] || s[0]==s[4] || s[1]==s[2] || s[1]==s[3] || s[1]==s[4] || s[2]==s[3] || s[2]==s[4] || s[3]==s[4])
    {
        return 0;
    } 
    return 1;
}
signed main()
{
    int n;
    cin>>n;
    while(1)
    {
        n++;
        if(check(n))
        {
            cout<<n;
            return 0;
        }
    }
    return 0;
}