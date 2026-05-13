#include<bits/stdc++.h>
using namespace std;
int i;
string s;
map<char,int> mp;
int main()
{
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    if(mp.size()%2==0) 
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}