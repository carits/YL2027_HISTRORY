#include<bits/stdc++.h>
using namespace std;
int t;
string x;
int main()
{
    cin>>t;
    while(t--)
    {
        bool f=true;
        cin>>x;
        for(int i=0;i<x.size();i++)
        {
            if(i==0 && x[i]!='1')
            {
                f=false;
                cout<<"NO\n";
                break;
            }
            else if(i==x.size()-1 && x[i]=='9')
            {
                f=false;
                cout<<"NO\n";
                break;
            }
            else if(i>0 && i<x.size()-1 && x[i]=='0')
            {
                f=false;
                cout<<"NO\n";
                break;
            }
        }
        if(f)
        {
            cout<<"YES\n";
        }
    }
    return 0;
}