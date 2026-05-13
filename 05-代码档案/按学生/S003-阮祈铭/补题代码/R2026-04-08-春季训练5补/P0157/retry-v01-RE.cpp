#include<bits/stdc++.h>
using namespace std;
string a,b,ay,by;
map<char,bool> mp;
int main()
{
    freopen("smym.in", "r", stdin);
    freopen("smym.out", "w", stdout);
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    mp['a']=true; mp['o']=true; mp['e']=true; 
    mp['i']=true; mp['u']=true; mp['v']=true; 
    cin>>a>>b;
    if(mp[a[0]])
    {
        ay=a;a="";
    }
    else if(mp[a[1]])
    {
        ay=a.substr(1,a.size()-1);
        a=a[0];
    }
    else
    {
        ay=a.substr(2,a.size()-2);
        a=a.substr(0,2);
    }
    
    if(mp[b[0]])
    {
        by=b;b="";
    }
    else if(mp[b[1]])
    {
        by=b.substr(1,b.size()-1);
        b=b[0];
    }
    else
    {
        by=b.substr(2,b.size()-2);
        b=b.substr(0,2);
    }
    
    if(a==b && ay==by)
    {
        cout<<3<<endl;
    }
    else if(ay==by)
    {
        cout<<1<<endl;
    }
    else if(a==b)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}