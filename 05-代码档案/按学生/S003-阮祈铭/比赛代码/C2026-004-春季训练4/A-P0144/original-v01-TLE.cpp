#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
int main()
{
    cin>>t;
    while(t--)
    {
        bool f=true;
        cin>>n>>s;
        for(int i=1;i<s.size()-1;i++)
        {
            if((s.substr(0,i)+s.substr(i+1,s.size()-i-1)).find(s[i]) != string::npos)
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