#include<bits/stdc++.h>
using namespace std;
int t,n,k,cnt;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cnt=0;
		cin>>n>>k>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='B')
			{
				cnt++;
				i+=k-1;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}