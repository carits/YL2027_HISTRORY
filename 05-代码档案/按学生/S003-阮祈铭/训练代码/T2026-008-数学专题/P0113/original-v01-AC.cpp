#include<bits/stdc++.h>
using namespace std;
int n,x,y,t;
int main()
{
    cin>>t;
    while(t--)
    {
    	int ans=INT_MAX,ansi;
        cin>>n>>x>>y;
        for(int i=1;i<=abs(x-y);i++)
        {
        	for(int j=1;j<=x;j++)
        	{
        		if((x-j)%i==0 && j+i*(n-1)>=y && (y-x)%i==0)
        		{
        			if(ans>j+i*(n-1))
        			{
        				ans=j+i*(n-1);
        				ansi=i;
        			}
        		}
        	}
    	}
    	for(int v=ans,i=0;i<n;i++,v-=ansi)
    	{
    		cout<<v<<' ';
    	}
    	cout<<endl;
    }
    return 0;
}