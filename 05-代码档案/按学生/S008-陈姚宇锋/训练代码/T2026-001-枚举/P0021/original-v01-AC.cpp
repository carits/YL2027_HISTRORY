#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a,b,c;
map<char,int>vis;
signed main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();++i)
    {
        if(vis[s[i]]==0)
        {
            vis[s[i]]=1;
            sum++;
        }
    }
    if(sum%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}