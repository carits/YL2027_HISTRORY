#include<bits/stdc++.h>
using namespace std;
string s;
bool vis[2005];
int main()
{
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(vis[s[i]]==0)
            cnt++; 
        vis[s[i]]=1;
    }
    if(cnt%2!=0)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}