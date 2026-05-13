#include<bits/stdc++.h>
using namespace std;
string a,b;
int x=1,y=1,i;
int main()
{
    cin>>a>>b;
    for(i=0;i<a.size();i++)
        x=x*(int)(a[i]-'A'+1);
    for(i=0;i<b.size();i++)
        y=y*(int)(b[i]-'A'+1);
    if(x%47==y%47)
        cout<<"GO";
    else
        cout<<"STAY";
    return 0;
}