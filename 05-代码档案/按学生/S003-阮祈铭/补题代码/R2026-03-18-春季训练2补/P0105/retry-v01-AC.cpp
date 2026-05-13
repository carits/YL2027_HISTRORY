#include<bits/stdc++.h>
using namespace std;
int t;
string a,b,c;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a[0] == a[1] && a[1] == a[2] && a[0]!='.')
        {
            cout<<a[0]<<endl;
        }
        else if(b[0] == b[1] && b[1] == b[2] && b[0]!='.')
        {
            cout<<b[0]<<endl;
        }
        else if(c[0] == c[1] && c[1] == c[2] && c[0]!='.')
        {
            cout<<c[0]<<endl;
        }
        else if(a[0] == b[0] && b[0] == c[0] && a[0]!='.')
        {
            cout<<a[0]<<endl;
        }
        else if(a[1] == b[1] && b[1] == c[1] && a[1]!='.')
        {
            cout<<a[1]<<endl;
        }
        else if(a[2] == b[2] && b[2] == c[2] && a[2]!='.')
        {
            cout<<a[2]<<endl;
        }
        else if(a[0] == b[1] && b[1] == c[2] && a[0]!='.')
        {
            cout<<a[0]<<endl;
        }
        else if(a[2] == b[1] && b[1] == c[0] && a[2]!='.')
        {
            cout<<a[2]<<endl;
        }
        else
        {
            cout<<"DRAW\n";
        }
    }
    return 0;
}