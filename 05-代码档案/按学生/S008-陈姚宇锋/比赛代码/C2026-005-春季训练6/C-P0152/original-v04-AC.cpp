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
        int flag=-1;
        for(int i=0;i<s1.size();++i) 
        {
            if(s1[i]=='1' && s2[i]=='1')
            {
                if(flag==0)
                {
                    num+=1; 
                    flag=-1;
                }
                else if(flag==1)
                {
                    flag=1;
                }
                else
                {
                    flag=1;
                }
                continue;
            }
            else if(s1[i]=='0' && s2[i]=='0')
            {
                if(flag==1)
                {
                    num+=2;
                    flag=-1;
                }
                else if(flag==0)
                {
                    flag=0;
                    num++;
                }
                else
                {
                    flag=0;
                    num+=1;
                }
                continue;
            }
            else
            {
                if(flag!=-1)
                {
                    flag=-1;
                }
                if(s1[i]=='1' && s2[i]=='0')
                {
                    num+=2;
                }
                else if(s1[i]=='0' && s2[i]=='1')
                {
                    num+=2;
                }
            }
        }
        cout<<num<<endl;
    } 
    return 0;
}