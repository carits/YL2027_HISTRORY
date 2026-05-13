#include <bits/stdc++.h>
using namespace std;
#define int long long
map<char,int>op;
signed main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cin>>len;
        string s;
        cin>>s;
        int maxx=0;
        for(int i=0;i<s.size();++i)
        {
            op[s[i]]++;
            maxx=max(maxx,op[s[i]]);
        }
        if(len%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        } 
        for(int i=0;i<len-1;++i)
        {
            if(s[i]==s[i+1])
            {
                s[i]='*';
                s[i+1]='*';
            }
        }
        for(int sum=1;sum<=maxx/2;++sum)
        {
            for(int i=0;i<len-1;++i)
            {
                for(int j=i+1;j<len;++j)
                {
                    if(s[i]==s[j])
                    {
                        int flag=0;
                        for(int k=i+1;k<=j-1;++k)
                        {
                            if(s[k]!='*')
                            {
                                flag=1;
                            }
                        } 
                        if(flag==0)
                        {
                            s[i]='*';
                            s[j]='*';
                        }
                    } 
                }
            }
        }
        int flag=0;
        for(int i=0;i<len;++i)
        {
            if(s[i]!='*')
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
    }
	return 0;
}