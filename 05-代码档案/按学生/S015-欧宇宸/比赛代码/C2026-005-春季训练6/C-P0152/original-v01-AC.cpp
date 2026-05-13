#include<bits/stdc++.h>
using namespace std;
char t[200000],t1[200000];
int a[100000];
int check(int x)
{
    if(t[x]=='1'&&t1[x]=='0'||t[x]=='0'&&t1[x]=='1')return 2;
    if(t1[x]=='0'&&t[x]=='0')return 1;
    if(t1[x]=='1'&&t[x]=='1')return 0;
}
int main()
{
    int ty;
    cin>>ty;
    a[0]=1e9;
    while(ty--)
    {
        int n;
        cin>>n;
        a[n+1]=1e9;
        for(int i = 1; i <= n; i++)
        {
            cin>>t[i];
        }
        for(int i = 1; i <= n; i++)
        {
            cin>>t1[i];
            a[i]=check(i);
        }
        int ans=0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i]==1e9)continue;
            if(a[i]==1)
            {
                if(a[i-1]==0)
                {
                    a[i-1]=1e9;
                    a[i]=2;
                }
                if(a[i+1]==0)
                {
                    a[i+1]=1e9;
                    a[i]=2; 
                }
                
            }
            if(a[i]==0)
            {
                if(a[i-1]==1)
                {
                    a[i-1]=1e9;
                    a[i]=2;
                }
                if(a[i+1]==1)
                {
                    a[i+1]=1e9;
                    a[i]=2; 
                }
                
            }
            ans+=a[i];
        }
        cout<<ans<<'\n';
        
    }
    
	return 0;
}
//只有1，值为0
//只有0，值为1
//有1，0值为2 
//状态设计：dp[i]表以i列结尾的最大M 
