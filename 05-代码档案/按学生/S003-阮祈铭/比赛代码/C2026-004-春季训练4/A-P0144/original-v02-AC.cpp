#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
map<char,int> mp;
int main()
{
    cin>>t;
    while(t--)
    {
        mp.clear();
        bool f=true;
        cin>>n>>s;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=1;i<s.size()-1;i++)
        {
            if(mp[s[i]]>1)
            {
                f=false;
            }
        }
        if(f)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
    return 0;
}