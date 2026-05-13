#include<bits/stdc++.h>
using namespace std;
string s;
int n,i,x,y,t,j;
int main()
{
	cin>>t;
	for(j=1;j<=t;j++)
	{
		x=0;y=0;
		cin>>n>>s;
		for(i=0;i<n;i++)
		{
			if(s[i]=='U')
				y++;
			else if(s[i]=='D')
				y--;
			else if(s[i]=='L')
				x--;
			else
				x++;
			if(x==1&&y==1)
			{
				cout<<"YES\n";
				break;
			}	
		}
			if(x!=1||y!=1)
				cout<<"NO\n";
	}
	return 0;
}