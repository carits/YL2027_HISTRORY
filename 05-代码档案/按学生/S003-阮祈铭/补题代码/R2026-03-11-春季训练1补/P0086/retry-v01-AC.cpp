#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if(n%2==1)
        {
            cout<<"NO\n";
            continue;
        }
        while(n>0)
        {
            bool f=true;
            for(int j=0;j<n;j++)
            {
                if(s[j]==s[j+1])
                {
                    f=false;
                    s=s.substr(0,j)+s.substr(j+2,n-j-2);
                    n-=2;
                }
            }
            if(f)
            {
                break;
            }
        }
        if(s=="")
        {
            cout<<"YES\n";
        }
        else
        {
            cout <<"NO\n";
        }
    }
    return 0;
}