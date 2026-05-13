#include<bits/stdc++.h>
using namespace std;
long long t;
string a,b;
int main()
{
    cin>>t;
    while(t--)
    {
        bool f=true;
        cin>>a>>b;
        for(int i=0;i<a.size() && f;i++)
        {//
            if(a[i]!=b[0])
            {
                continue;
            }
            for(int j=0;j<b.size();j++)
            {
                if(i+j>=a.size() || i+j-(b.size()-1-j)<0 || b.size()-1-j>=a.size() || i+j-(b.size()-1-j)>=a.size())
                {
                    continue;
                }
                string l=a.substr(i,j+1),tmp=a.substr(i+j-(b.size()-1-j),b.size()-1-j);
                reverse(tmp.begin(),tmp.end());
                if(l+tmp==b)
                {
                    cout<<"YES\n";
                    f=false;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}