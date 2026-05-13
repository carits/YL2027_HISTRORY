#include <bits/stdc++.h>
using namespace std;
char x[27]={' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int a=1;
	int b=1;
	for(int i=0;i<s1.size();++i)
	{
		for(int j=1;j<=26;++j)
		{
			if(x[j]==s1[i])
			{
				a*=j;
			}
		}
	}
	for(int i=0;i<s2.size();++i)
	{
		for(int j=1;j<=26;++j)
		{
			if(x[j]==s2[i])
			{
				b*=j;
			}
		}
	}
	if(a%47==b%47)
	{
		cout<<"GO"<<endl;
	}
	else
	{
		cout<<"STAY"<<endl;
	}
	return 0;
}
