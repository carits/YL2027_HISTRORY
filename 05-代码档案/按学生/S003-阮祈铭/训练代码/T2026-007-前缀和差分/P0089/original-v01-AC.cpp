#include<bits/stdc++.h>
using namespace std;
int t,n,s[200010]={0};
int main()
{
	for(int i=1;i<=200010;i++)
	{
		s[i]=s[i-1];
		int l=i;
		while(l>0)
		{
			s[i]+=l%10;
			l/=10;
		}
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<s[n]<<endl;
	}
	return 0;
}