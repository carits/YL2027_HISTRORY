#include<cstring>
#include<iostream>
using namespace std;

int n,m;
bool pd=false;
bool su(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)return false;
    }
    return true;
}
int zh(int x)
{
    string s=to_string(x);
    string ans;
    for(int i=0;i<s.size();i++)
    {
        ans[i]=s[s.size()-i-1];
    }
    return stol(ans);
}
int main()
{
    cin>> n >> m;
    for(int i=n;i<=m;i++)
    {
        if(su(i)==true&&su(zh(i))==true&&pd!=false)
        {
            cout << "," << i;
            pd=true;
        }
        else if(su(i)==true&&su(zh(i))==true&&pd==false)
        {
            cout << i;
            pd=true;
        }
    }
    if(pd!=true)cout<< "No";
    return 0;
};