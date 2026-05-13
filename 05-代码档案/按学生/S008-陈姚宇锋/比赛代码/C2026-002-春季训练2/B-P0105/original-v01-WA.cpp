#include <bits/stdc++.h>
using namespace std;
#define int long long
string s[10009];
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>s[0]>>s[1]>>s[2];
    	for(int i=0;i<3;i++)
        {
    		if(s[i][0]==s[i][1] && s[i][1]==s[i][2] && s[i][1]!='.')
            {
    			cout<<s[i][1]<<endl;
    			flag=1;
    			break;
    		}
    	}
    	for(int i=0;i<3;i++)
        {
    		if(s[0][i]==s[1][i] && s[1][i]==s[2][i] && s[1][i]!='.')
            {
    			cout<<s[1][i]<<endl;
    			flag=1;
    			break;
    		}
    	}
    	if(s[0][0]==s[1][1] && s[1][1]==s[2][2] && s[1][1]!='.')
        {
    		cout<<s[1][1]<<endl;
    		flag=1;
    		break;
    	}
    	if(s[2][0]==s[1][1]&&s[1][1]==s[0][2]&&s[1][1]!='.')
        {
    		cout<<s[1][1]<<endl;
    		flag=1;
    		break;
    	}
    	if(flag==0)
    	{
    	   cout<<"DRAW\n";   
    	}
    }
    return 0;
}