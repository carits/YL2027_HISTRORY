#include<bits/stdc++.h>
using namespace std;
int t,n,m;
string s,s1,x;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>s>>s1;
		if(s.find(s1) != string::npos)
		{
			cout<<0<<endl;
			continue;
		}
		bool f=true;
		x=s;
		for(int i=1;i<=5;i++)
		{
			x+=x;
			if(x.find(s1) != string::npos)
			{
				f=false;
				cout<<i<<endl;
				break;
			}
		}
		if(f)
		{
			cout<<-1<<endl;
		}
	}
	return 0;
}