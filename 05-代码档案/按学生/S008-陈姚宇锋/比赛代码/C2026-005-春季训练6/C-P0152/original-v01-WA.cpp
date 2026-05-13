#include <bits/stdc++.h>
using namespace std;
#define int long long
 signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        string t1="";
        string t2="";
        int num=0;
        for(int i=0;i<s1.size()-1;++i) 
        {
            if(s1[i]=='1' && s2[i]=='1' && s1[i+1]=='1' && s2[i+1]=='1')
            {
                continue;
            }
            else if(s1[i]=='0' && s2[i]=='0' && s1[i+1]=='0' && s2[i+1]=='0')
            {
                num+=1;
                continue;
            }
            else
            {
                if(s1[i]=='1' && s2[i]=='0')
                {
                    num+=2;
                }
                else if(s1[i]=='0' && s2[i]=='1')
                {
                    num+=2;
                }
                else
                {
                    num+=2;
                    i+=1;
                }
            }
        }
        if(s1[s1.size()-1]=='1' && s2[s1.size()-1]=='0')
        {
            num+=2;
        }
        else if(s1[s1.size()-1]=='0' && s2[s1.size()-1]=='1')
        {
            num+=2;
        }
        else if(s1[s1.size()-1]=='0' && s2[s1.size()-1]=='0')
        {
            num+=1;
        }
        cout<<num<<endl;
    } 
    return 0;
}