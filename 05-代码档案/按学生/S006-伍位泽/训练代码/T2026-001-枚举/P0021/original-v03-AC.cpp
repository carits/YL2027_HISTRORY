#include <bits/stdc++.h>
using namespace std;
string s;
bool a[30];
int main ( )
{
    cin >> s;
    int cnt=0;
    for (int i=0;i<=s.size ( )-1;i++)
    {
        if (s[i]>='a'&&s[i]<='z')
        {
            a[s[i]-'a']=1;
        }
    }
    for (int i=0;i<=25;i++)
    {
        cnt+=a[i];
    }
    if (cnt%2==1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}