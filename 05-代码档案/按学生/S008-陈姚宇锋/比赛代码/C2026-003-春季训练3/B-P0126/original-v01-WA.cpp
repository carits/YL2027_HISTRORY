#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int t;
    cin>>t;
	while(t--) 
	{
	   string s;
       cin>>s;
       int len=s.size();
       if(s[len-1]=='9')
       {
           cout<<"NO"<<endl;
           continue;
       }	
       if(s[0]!='1')
       {
           cout<<"YES"<<endl;
           continue;
       }
       int flag=0;
       for(int i=1;i<len-1;++i)
       {
           if(s[i]=='0')
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