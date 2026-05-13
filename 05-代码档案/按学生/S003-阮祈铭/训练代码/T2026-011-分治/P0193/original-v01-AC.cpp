#include<bits/stdc++.h>
using namespace std;
string a,b;
bool f(string a1,string b1)
{
    if(a1==b1)
    {
        return true;
    }
    return a1.size()%2==0 && b1.size()%2==0 && ((f(a1.substr(0,a1.size()/2),b1.substr(0,b1.size()/2)) && f(a1.substr(a1.size()/2,a1.size()/2),b1.substr(b1.size()/2,b1.size()/2))) || (f(a1.substr(0,a1.size()/2),b1.substr(b1.size()/2,b1.size()/2)) && f(b1.substr(0,b1.size()/2),a1.substr(a1.size()/2,a1.size()/2))));
}
int main()
{
    cin>>a>>b;
    if(f(a,b))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}