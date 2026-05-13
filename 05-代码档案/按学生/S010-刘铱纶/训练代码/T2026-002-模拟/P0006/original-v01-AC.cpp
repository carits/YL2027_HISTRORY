#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int main()
{
    cin>>s1>>s2;
    int o1=1,o2=1;
    for(int i=0;i<s1.size();i++)
        o1*=(int)(s1[i]-'A'+1);
    for(int i=0;i<s2.size();i++)
        o2*=(int)(s2[i]-'A'+1);
    if(o1%47==o2%47)
        cout<<"GO";
    else
        cout<<"STAY";
    return 0;
}